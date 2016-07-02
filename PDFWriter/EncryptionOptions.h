/*
Source File : EncryptionOptions.h


Copyright 2011 Gal Kahana PDFWriter

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.


*/
#pragma once

#include <string>

struct EncryptionOptions
{
	bool ShouldEncrypt;
	std::string UserPassword;
	long long UserProtectionOptionsFlag;
	std::string OwnerPassword;
	bool EncryptMetadata;

	// for no encryption scenarios
	EncryptionOptions() {
		ShouldEncrypt = false;
		EncryptMetadata = false;
		UserProtectionOptionsFlag = 0;
	}

	// for encryption scenarios
	EncryptionOptions(const std::string& inUserPassword,
					long long inUserProtectionOptionsFlag,
					const std::string& inOwnerPassword,
					bool inEncryptMetadata) {
		ShouldEncrypt = true;
		UserPassword = inUserPassword;
		UserProtectionOptionsFlag = inUserProtectionOptionsFlag;
		OwnerPassword = inOwnerPassword;
		EncryptMetadata = inEncryptMetadata;
	}

	static const EncryptionOptions DefaultEncryptionOptions;
};