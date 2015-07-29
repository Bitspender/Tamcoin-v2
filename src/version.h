// Copyright (c) 2012 The Bitcoin developers
// Copyright (c) 2012-2013 The TAMoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include <string>

//
// client versioning
//

// These need to be macro's, as version.cpp's voodoo requires it

// Tamcoin version - intended for display purpose only
#define Tamcoin_VERSION_MAJOR       0
#define Tamcoin_VERSION_MINOR       1
#define Tamcoin_VERSION_REVISION    2
#define Tamcoin_VERSION_BUILD       0

static const int Tamcoin_VERSION =
                           1000000 * Tamcoin_VERSION_MAJOR
                         +   10000 * Tamcoin_VERSION_MINOR
                         +     100 * Tamcoin_VERSION_REVISION
                         +       1 * Tamcoin_VERSION_BUILD;

// Tamcoin version - reference for code tracking
#define TAMOIN_VERSION_MAJOR       0
#define TAMOIN_VERSION_MINOR       4
#define TAMOIN_VERSION_REVISION    0
#define TAMOIN_VERSION_BUILD       0

static const int TAMOIN_VERSION =
                           1000000 * TAMOIN_VERSION_MAJOR
                         +   10000 * TAMOIN_VERSION_MINOR
                         +     100 * TAMOIN_VERSION_REVISION
                         +       1 * TAMOIN_VERSION_BUILD;

// bitcoin version - reference for code tracking
#define BITCOIN_VERSION_MAJOR       0
#define BITCOIN_VERSION_MINOR       6
#define BITCOIN_VERSION_REVISION    3
#define BITCOIN_VERSION_BUILD       0

static const int BITCOIN_VERSION =
                           1000000 * BITCOIN_VERSION_MAJOR
                         +   10000 * BITCOIN_VERSION_MINOR 
                         +     100 * BITCOIN_VERSION_REVISION
                         +       1 * BITCOIN_VERSION_BUILD;

static const int CLIENT_VERSION = BITCOIN_VERSION;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;


//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 60004;

// earlier versions not supported as of Feb 2012, and are disconnected
// NOTE: as of bitcoin v0.6 message serialization (vSend, vRecv) still
// uses MIN_PROTO_VERSION(209), where message format uses PROTOCOL_VERSION
static const int MIN_PROTO_VERSION = 209;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

#endif
