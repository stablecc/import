#include <gtest/gtest.h>
#include <iostream>
#include "cryptlib.h"
#include "modes.h"
#include "aes.h"
#include "misc.h"
#include "validate.h"

using namespace CryptoPP;
using namespace std;

void RegisterFactories();

namespace { OFB_Mode<AES>::Encryption s_globalRNG; }
RandomNumberGenerator & GlobalRNG()
{
	return dynamic_cast<RandomNumberGenerator&>(s_globalRNG);
}

TEST(Cryptocc_test, All) {
    ASSERT_TRUE(ValidateAll(false));
}

int main(int argc, char**argv)
{
    std::string seed = IntToString(time(NULL));
    seed.resize(16, ' ');

    cout << "Setting random seed: " << seed << "\n";

    OFB_Mode<AES>::Encryption& prng = dynamic_cast<OFB_Mode<AES>::Encryption&>(GlobalRNG());
	prng.SetKeyWithIV((byte *)seed.data(), 16, (byte *)seed.data());

    cout << "Register factories\n";

    RegisterFactories();

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
