/* vim:set ft=cpp ts=4 sts=4 sw=4 noet ai si bs=2 cin: */
/*
 *  Copyright (c) 2018-2019, SLikeSoft UG (haftungsbeschränkt)
 *
 *  This source code is  licensed under the MIT-style license found in the license.txt
 *  file in the root directory of this source tree.
 */
#pragma once

#include "securestring.h"   // used for SLNet::Crypto::CSecureString
#include "ifileencrypter.h" // used for SLNet::Crypto::IFileEncrypter

namespace SLNet
{
	namespace Experimental
	{
		namespace Crypto
		{
			class Factory
			{
			public:
				static IFileEncrypter* ConstructFileEncrypter(const char *publicKey, size_t publicKeyLength);
				static IFileEncrypter* ConstructFileEncrypter(const char *publicKey, size_t publicKeyLength, const char *privateKey, size_t privateKeyLength, CSecureString& privateKeyPassword);
			};
		}
	}
}
