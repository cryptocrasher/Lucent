// Copyright (c) 2014 The Bitcoin Core developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2017-2018 The Lucent developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "primitives/transaction.h"
#include "main.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(main_tests)

CAmount nMoneySupplyPoWEnd = 43199500 * COIN;

BOOST_AUTO_TEST_CASE(subsidy_limit_test)
{
    CAmount nSum = 0;
    for (int nHeight = 0; nHeight < 1; nHeight += 1) {
        /* premine in block 1 (16000000,001 LUCENT) */
        CAmount nSubsidy = GetBlockValue(nHeight);
        BOOST_CHECK(nSubsidy <= 16000000 * COIN);
        nSum += nSubsidy;
    }

   /* for (int nHeight = 1; nHeight < 1440; nHeight += 1) {
         PoW Phase instamine 
        CAmount nSubsidy = GetBlockValue(nHeight);
        BOOST_CHECK(nSubsidy <= 0.5 * COIN);
        nSum += nSubsidy;
    }

    for (int nHeight = 1440; nHeight < 86400; nHeight += 1) {
         PoW Phase One 
        CAmount nSubsidy = GetBlockValue(nHeight);
        BOOST_CHECK(nSubsidy <= 6 * COIN);
        nSum += nSubsidy;
    }
	
	for (int nHeight = 86400; nHeight < 151200; nHeight += 1) {
         PoW Phase One2 
        CAmount nSubsidy = GetBlockValue(nHeight);
        BOOST_CHECK(nSubsidy <= 5 * COIN);
        nSum += nSubsidy;
    }

    for (int nHeight = 151200; nHeight < 200; nHeight += 1) {
         PoW Phase Two 
        CAmount nSubsidy = GetBlockValue(nHeight);
        BOOST_CHECK(nSubsidy <= 4 * COIN);
        BOOST_CHECK(MoneyRange(nSubsidy));
        nSum += nSubsidy;
        BOOST_CHECK(nSum > 0 && nSum <= nMoneySupplyPoWEnd);
    }
    BOOST_CHECK(nSum == 4109975100000000ULL);*/
}

BOOST_AUTO_TEST_SUITE_END()
