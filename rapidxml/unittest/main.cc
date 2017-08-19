#include <gtest/gtest.h>
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include "rapidxml.hpp"
//#include "rapidxml_print.hpp"

using namespace rapidxml;
using std::cout;
using std::endl;

class Xml_test : public testing::Test
{
protected:
    xml_document<> doc;
    std::string orig;

    virtual void SetUp() {
        std::ifstream f{"t.xml", std::ios::in|std::ios::ate};   // open at end
        auto sz = f.tellg();
        f.seekg(0);
        std::string s(sz, '\0');
        f.read(&s[0], sz);
        orig = s;
        doc.parse<0>(&s[0]);        // parse the doc with defaults
    }
};

TEST_F(Xml_test, DISABLED_parse_and_print) {
    cout << "xml contents:" << endl;
    cout << orig;
    std::string s;
    //print(std::back_inserter(s), doc, 0);
    ASSERT_EQ(s.substr(0, 6), "<root>");
}

TEST_F(Xml_test, first_node_root) {
    xml_node<>* n = doc.first_node();
    ASSERT_NE(n, nullptr);
    cout << "first node name: " << n->name() << endl;
    ASSERT_STREQ(n->name(), "root");
    n = doc.first_node("root");
    ASSERT_NE(n, nullptr);
    ASSERT_STREQ(n->name(), "root");
}

TEST_F(Xml_test, empty) {
    xml_node<>* r = doc.first_node("root");
    ASSERT_NE(r, nullptr);
    xml_node<>* n = r->first_node("empty");
    ASSERT_NE(n, nullptr);
    ASSERT_STREQ(n->name(), "empty");
    ASSERT_STREQ(n->value(), "");
    n = r->first_node("emptyselfclose");
    ASSERT_NE(n, nullptr);
    ASSERT_STREQ(n->name(), "emptyselfclose");
    ASSERT_STREQ(n->value(), "");
}

TEST_F(Xml_test, content) {
    xml_node<>* r = doc.first_node("root");
    ASSERT_NE(r, nullptr);
    xml_node<>* n = r->first_node("content");
    ASSERT_NE(n, nullptr);
    ASSERT_STREQ(n->name(), "content");
    ASSERT_STREQ(n->value(), "something");
}

TEST_F(Xml_test, attributes) {
    xml_node<>* r = doc.first_node("root");
    ASSERT_NE(r, nullptr);
    xml_node<>* n = r->first_node("attrib");
    ASSERT_NE(n, nullptr);
    ASSERT_STREQ(n->name(), "attrib");
    xml_attribute<> *a = n->first_attribute();
    ASSERT_NE(a, nullptr);
    ASSERT_STREQ(a->name(), "a1");
    ASSERT_STREQ(a->value(), "attr1");
    a = a->next_attribute();
    ASSERT_NE(a, nullptr);
    ASSERT_STREQ(a->name(), "a2");
    ASSERT_STREQ(a->value(), "attr2");
}

TEST_F(Xml_test, items) {
    xml_node<>* r = doc.first_node("root");
    ASSERT_NE(r, nullptr);
    xml_node<>* n = r->first_node("items");
    ASSERT_NE(n, nullptr);
    ASSERT_STREQ(n->name(), "items");
    xml_node<>* i = n->first_node("item");
    ASSERT_NE(i, nullptr);
    ASSERT_STREQ(i->name(), "item");
    i = i->next_sibling("item");
    ASSERT_NE(i, nullptr);
    ASSERT_STREQ(i->name(), "item");
}

TEST_F(Xml_test, namespaces) {
    xml_node<>* r = doc.first_node("root");
    ASSERT_NE(r, nullptr);
    xml_node<>* n = r->first_node("namespaces");
    ASSERT_NE(n, nullptr);
    ASSERT_STREQ(n->name(), "namespaces");
    xml_attribute<> *a = n->first_attribute();
    ASSERT_NE(a, nullptr);
    ASSERT_STREQ(a->name(), "xmlns:a");
    ASSERT_STREQ(a->value(), "ns1");
    a = a->next_attribute();
    ASSERT_NE(a, nullptr);
    ASSERT_STREQ(a->name(), "xmlns:b");
    ASSERT_STREQ(a->value(), "ns2");
    xml_node<> *d = n->first_node();
    ASSERT_NE(d, nullptr);
    ASSERT_STREQ(d->name(), "a:dup");
    ASSERT_STREQ(d->value(), "adup");
    d = n->last_node();
    ASSERT_NE(d, nullptr);
    ASSERT_STREQ(d->name(), "b:dup");
    ASSERT_STREQ(d->value(), "bdup");
}

int main(int argc, char**argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
