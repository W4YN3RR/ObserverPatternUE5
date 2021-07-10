// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObserverPattern/ObserverPatternGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserverPatternGameMode() {}
// Cross Module References
	OBSERVERPATTERN_API UClass* Z_Construct_UClass_AObserverPatternGameMode_NoRegister();
	OBSERVERPATTERN_API UClass* Z_Construct_UClass_AObserverPatternGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ObserverPattern();
// End Cross Module References
	void AObserverPatternGameMode::StaticRegisterNativesAObserverPatternGameMode()
	{
	}
	UClass* Z_Construct_UClass_AObserverPatternGameMode_NoRegister()
	{
		return AObserverPatternGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AObserverPatternGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObserverPatternGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ObserverPattern,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserverPatternGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "ObserverPatternGameMode.h" },
		{ "ModuleRelativePath", "ObserverPatternGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObserverPatternGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObserverPatternGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObserverPatternGameMode_Statics::ClassParams = {
		&AObserverPatternGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObserverPatternGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObserverPatternGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObserverPatternGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObserverPatternGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObserverPatternGameMode, 4009197249);
	template<> OBSERVERPATTERN_API UClass* StaticClass<AObserverPatternGameMode>()
	{
		return AObserverPatternGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObserverPatternGameMode(Z_Construct_UClass_AObserverPatternGameMode, &AObserverPatternGameMode::StaticClass, TEXT("/Script/ObserverPattern"), TEXT("AObserverPatternGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObserverPatternGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
