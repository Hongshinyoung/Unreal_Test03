// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Esc/RotatingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ESC_API UClass* Z_Construct_UClass_ARotatingActor();
	ESC_API UClass* Z_Construct_UClass_ARotatingActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Esc();
// End Cross Module References
	void ARotatingActor::StaticRegisterNativesARotatingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatingActor);
	UClass* Z_Construct_UClass_ARotatingActor_NoRegister()
	{
		return ARotatingActor::StaticClass();
	}
	struct Z_Construct_UClass_ARotatingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotatingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotatingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Esc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingActor.h" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotatingMesh_MetaData[] = {
		{ "Category", "RotatingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotatingMesh = { "RotatingMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARotatingActor, RotatingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotatingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotatingMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "RotatingActor.h" },
		{ "ToolTip", "\xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARotatingActor, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotatingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotatingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingActor_Statics::ClassParams = {
		&ARotatingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARotatingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotatingActor()
	{
		if (!Z_Registration_Info_UClass_ARotatingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingActor.OuterSingleton, Z_Construct_UClass_ARotatingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARotatingActor.OuterSingleton;
	}
	template<> ESC_API UClass* StaticClass<ARotatingActor>()
	{
		return ARotatingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingActor);
	ARotatingActor::~ARotatingActor() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_RotatingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_RotatingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingActor, ARotatingActor::StaticClass, TEXT("ARotatingActor"), &Z_Registration_Info_UClass_ARotatingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingActor), 509719708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_RotatingActor_h_3315369713(TEXT("/Script/Esc"),
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_RotatingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Test03_Esc_Source_Esc_RotatingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
