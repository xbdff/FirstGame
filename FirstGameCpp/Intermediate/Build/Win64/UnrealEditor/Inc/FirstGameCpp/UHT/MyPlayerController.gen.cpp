// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGameCpp/MyPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FIRSTGAMECPP_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	FIRSTGAMECPP_API UClass* Z_Construct_UClass_AMyPlayerController();
	FIRSTGAMECPP_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstGameCpp();
// End Cross Module References
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerController);
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJumpCouldPlay_MetaData[];
#endif
		static void NewProp_IsJumpCouldPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJumpCouldPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJogCouldPlay_MetaData[];
#endif
		static void NewProp_IsJogCouldPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJogCouldPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsIdleCouldPlay_MetaData[];
#endif
		static void NewProp_IsIdleCouldPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsIdleCouldPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Main;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGameCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyPlayerController.h" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJumpCouldPlay_MetaData[] = {
		{ "Category", "Basic Config" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJumpCouldPlay_SetBit(void* Obj)
	{
		((AMyPlayerController*)Obj)->IsJumpCouldPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJumpCouldPlay = { "IsJumpCouldPlay", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayerController), &Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJumpCouldPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJumpCouldPlay_MetaData), Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJumpCouldPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJogCouldPlay_MetaData[] = {
		{ "Category", "Basic Config" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJogCouldPlay_SetBit(void* Obj)
	{
		((AMyPlayerController*)Obj)->IsJogCouldPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJogCouldPlay = { "IsJogCouldPlay", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayerController), &Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJogCouldPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJogCouldPlay_MetaData), Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJogCouldPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsIdleCouldPlay_MetaData[] = {
		{ "Category", "Basic Config" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsIdleCouldPlay_SetBit(void* Obj)
	{
		((AMyPlayerController*)Obj)->IsIdleCouldPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsIdleCouldPlay = { "IsIdleCouldPlay", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayerController), &Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsIdleCouldPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsIdleCouldPlay_MetaData), Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsIdleCouldPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Main_MetaData[] = {
		{ "Category", "Basic Config" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Main = { "Main", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, Main), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Main_MetaData), Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Main_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ForwardValue_MetaData[] = {
		{ "Category", "Basic Config" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ForwardValue = { "ForwardValue", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, ForwardValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ForwardValue_MetaData), Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ForwardValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue_MetaData[] = {
		{ "Category", "Basic Config" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue = { "RightValue", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, RightValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue_MetaData), Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJumpCouldPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsJogCouldPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_IsIdleCouldPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_Main,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ForwardValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton;
	}
	template<> FIRSTGAMECPP_API UClass* StaticClass<AMyPlayerController>()
	{
		return AMyPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
	AMyPlayerController::~AMyPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Sy_Unreal_Project_FirstGameCpp_Source_FirstGameCpp_MyPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sy_Unreal_Project_FirstGameCpp_Source_FirstGameCpp_MyPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerController, AMyPlayerController::StaticClass, TEXT("AMyPlayerController"), &Z_Registration_Info_UClass_AMyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerController), 1360728686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sy_Unreal_Project_FirstGameCpp_Source_FirstGameCpp_MyPlayerController_h_2472234755(TEXT("/Script/FirstGameCpp"),
		Z_CompiledInDeferFile_FID_Sy_Unreal_Project_FirstGameCpp_Source_FirstGameCpp_MyPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sy_Unreal_Project_FirstGameCpp_Source_FirstGameCpp_MyPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
