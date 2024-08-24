// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstGameCpp_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstGameCpp;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstGameCpp()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstGameCpp.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstGameCpp",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF6160750,
				0x85E62261,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstGameCpp.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstGameCpp.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstGameCpp(Z_Construct_UPackage__Script_FirstGameCpp, TEXT("/Script/FirstGameCpp"), Z_Registration_Info_UPackage__Script_FirstGameCpp, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF6160750, 0x85E62261));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
