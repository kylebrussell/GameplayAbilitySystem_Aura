// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AureCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAureCharacterBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAureCharacterBase();
	AURA_API UClass* Z_Construct_UClass_AAureCharacterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAureCharacterBase::StaticRegisterNativesAAureCharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAureCharacterBase);
	UClass* Z_Construct_UClass_AAureCharacterBase_NoRegister()
	{
		return AAureCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AAureCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAureCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAureCharacterBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAureCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AureCharacterBase.h" },
		{ "ModuleRelativePath", "Public/AureCharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAureCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAureCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAureCharacterBase_Statics::ClassParams = {
		&AAureCharacterBase::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAureCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAureCharacterBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAureCharacterBase()
	{
		if (!Z_Registration_Info_UClass_AAureCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAureCharacterBase.OuterSingleton, Z_Construct_UClass_AAureCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAureCharacterBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAureCharacterBase>()
	{
		return AAureCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAureCharacterBase);
	AAureCharacterBase::~AAureCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Users_russe_Developer_Aura_UE_Version_5_3_GameplayAbilitySystem_Aura_Aura_Source_Aura_Public_AureCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_russe_Developer_Aura_UE_Version_5_3_GameplayAbilitySystem_Aura_Aura_Source_Aura_Public_AureCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAureCharacterBase, AAureCharacterBase::StaticClass, TEXT("AAureCharacterBase"), &Z_Registration_Info_UClass_AAureCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAureCharacterBase), 4086253354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_russe_Developer_Aura_UE_Version_5_3_GameplayAbilitySystem_Aura_Aura_Source_Aura_Public_AureCharacterBase_h_805180650(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_russe_Developer_Aura_UE_Version_5_3_GameplayAbilitySystem_Aura_Aura_Source_Aura_Public_AureCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_russe_Developer_Aura_UE_Version_5_3_GameplayAbilitySystem_Aura_Aura_Source_Aura_Public_AureCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
