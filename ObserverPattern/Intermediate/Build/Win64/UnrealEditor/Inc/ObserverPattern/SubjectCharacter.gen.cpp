// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObserverPattern/SubjectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubjectCharacter() {}
// Cross Module References
	OBSERVERPATTERN_API UClass* Z_Construct_UClass_ASubjectCharacter_NoRegister();
	OBSERVERPATTERN_API UClass* Z_Construct_UClass_ASubjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ObserverPattern();
	OBSERVERPATTERN_API UClass* Z_Construct_UClass_AObserverPatternCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASubjectCharacter::execJumpAndNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpAndNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASubjectCharacter::execMovementNotify)
	{
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementNotify(Z_Param_Direction,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASubjectCharacter::execnotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->notify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASubjectCharacter::execdeattach)
	{
		P_GET_OBJECT(AObserverPatternCharacter,Z_Param_newobserver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->deattach(Z_Param_newobserver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASubjectCharacter::execattach)
	{
		P_GET_OBJECT(AObserverPatternCharacter,Z_Param_newobserver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->attach(Z_Param_newobserver);
		P_NATIVE_END;
	}
	void ASubjectCharacter::StaticRegisterNativesASubjectCharacter()
	{
		UClass* Class = ASubjectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "attach", &ASubjectCharacter::execattach },
			{ "deattach", &ASubjectCharacter::execdeattach },
			{ "JumpAndNotify", &ASubjectCharacter::execJumpAndNotify },
			{ "MovementNotify", &ASubjectCharacter::execMovementNotify },
			{ "notify", &ASubjectCharacter::execnotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASubjectCharacter_attach_Statics
	{
		struct SubjectCharacter_eventattach_Parms
		{
			AObserverPatternCharacter* newobserver;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newobserver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASubjectCharacter_attach_Statics::NewProp_newobserver = { "newobserver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubjectCharacter_eventattach_Parms, newobserver), Z_Construct_UClass_AObserverPatternCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubjectCharacter_attach_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubjectCharacter_attach_Statics::NewProp_newobserver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubjectCharacter_attach_Statics::Function_MetaDataParams[] = {
		{ "Category", "Observer" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubjectCharacter_attach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubjectCharacter, nullptr, "attach", nullptr, nullptr, sizeof(SubjectCharacter_eventattach_Parms), Z_Construct_UFunction_ASubjectCharacter_attach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubjectCharacter_attach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubjectCharacter_attach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubjectCharacter_attach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubjectCharacter_attach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubjectCharacter_attach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubjectCharacter_deattach_Statics
	{
		struct SubjectCharacter_eventdeattach_Parms
		{
			AObserverPatternCharacter* newobserver;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newobserver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::NewProp_newobserver = { "newobserver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubjectCharacter_eventdeattach_Parms, newobserver), Z_Construct_UClass_AObserverPatternCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::NewProp_newobserver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::Function_MetaDataParams[] = {
		{ "Category", "Observer" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubjectCharacter, nullptr, "deattach", nullptr, nullptr, sizeof(SubjectCharacter_eventdeattach_Parms), Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubjectCharacter_deattach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubjectCharacter_deattach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubjectCharacter_JumpAndNotify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubjectCharacter_JumpAndNotify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Observer" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubjectCharacter_JumpAndNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubjectCharacter, nullptr, "JumpAndNotify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubjectCharacter_JumpAndNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubjectCharacter_JumpAndNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubjectCharacter_JumpAndNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubjectCharacter_JumpAndNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics
	{
		struct SubjectCharacter_eventMovementNotify_Parms
		{
			FVector Direction;
			float Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubjectCharacter_eventMovementNotify_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubjectCharacter_eventMovementNotify_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Observer" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubjectCharacter, nullptr, "MovementNotify", nullptr, nullptr, sizeof(SubjectCharacter_eventMovementNotify_Parms), Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubjectCharacter_MovementNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubjectCharacter_MovementNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubjectCharacter_notify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubjectCharacter_notify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Observer" },
		{ "Comment", "//dummy notify with print for testing purpose\n" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
		{ "ToolTip", "dummy notify with print for testing purpose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubjectCharacter_notify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubjectCharacter, nullptr, "notify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubjectCharacter_notify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubjectCharacter_notify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubjectCharacter_notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubjectCharacter_notify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASubjectCharacter_NoRegister()
	{
		return ASubjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASubjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASubjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ObserverPattern,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASubjectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASubjectCharacter_attach, "attach" }, // 3313587557
		{ &Z_Construct_UFunction_ASubjectCharacter_deattach, "deattach" }, // 3965623281
		{ &Z_Construct_UFunction_ASubjectCharacter_JumpAndNotify, "JumpAndNotify" }, // 3765672292
		{ &Z_Construct_UFunction_ASubjectCharacter_MovementNotify, "MovementNotify" }, // 2902543211
		{ &Z_Construct_UFunction_ASubjectCharacter_notify, "notify" }, // 2574113640
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SubjectCharacter.h" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubjectCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubjectCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubjectCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "SubjectCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubjectCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASubjectCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubjectCharacter_Statics::NewProp_BaseLookUpRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASubjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubjectCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASubjectCharacter_Statics::ClassParams = {
		&ASubjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASubjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASubjectCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASubjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASubjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASubjectCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASubjectCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASubjectCharacter, 2687124362);
	template<> OBSERVERPATTERN_API UClass* StaticClass<ASubjectCharacter>()
	{
		return ASubjectCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubjectCharacter(Z_Construct_UClass_ASubjectCharacter, &ASubjectCharacter::StaticClass, TEXT("/Script/ObserverPattern"), TEXT("ASubjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubjectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
