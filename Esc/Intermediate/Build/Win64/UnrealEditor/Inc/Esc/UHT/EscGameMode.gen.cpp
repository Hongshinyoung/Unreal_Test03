// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Esc/EscGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ESC_API UClass* Z_Construct_UClass_AEscGameMode();
	ESC_API UClass* Z_Construct_UClass_AEscGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Esc();
// End Cross Module References
	void AEscGameMode::StaticRegisterNativesAEscGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEscGameMode);
	UClass* Z_Construct_UClass_AEscGameMode_NoRegister()
	{
		return AEscGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEscGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Esc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EscGameMode.h" },
		{ "ModuleRelativePath", "EscGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscGameMode_Statics::ClassParams = {
		&AEscGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEscGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscGameMode()
	{
		if (!Z_Registration_Info_UClass_AEscGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscGameMode.OuterSingleton, Z_Construct_UClass_AEscGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEscGameMode.OuterSingleton;
	}
	template<> ESC_API UClass* StaticClass<AEscGameMode>()
	{
		return AEscGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscGameMode);
	AEscGameMode::~AEscGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_EscGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_EscGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEscGameMode, AEscGameMode::StaticClass, TEXT("AEscGameMode"), &Z_Registration_Info_UClass_AEscGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscGameMode), 39702658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_EscGameMode_h_1382900515(TEXT("/Script/Esc"),
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_EscGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_EscGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
