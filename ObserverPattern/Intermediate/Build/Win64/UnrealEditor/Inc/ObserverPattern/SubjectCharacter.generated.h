// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AObserverPatternCharacter;
#ifdef OBSERVERPATTERN_SubjectCharacter_generated_h
#error "SubjectCharacter.generated.h already included, missing '#pragma once' in SubjectCharacter.h"
#endif
#define OBSERVERPATTERN_SubjectCharacter_generated_h

#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_SPARSE_DATA
#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJumpAndNotify); \
	DECLARE_FUNCTION(execMovementNotify); \
	DECLARE_FUNCTION(execnotify); \
	DECLARE_FUNCTION(execdeattach); \
	DECLARE_FUNCTION(execattach);


#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJumpAndNotify); \
	DECLARE_FUNCTION(execMovementNotify); \
	DECLARE_FUNCTION(execnotify); \
	DECLARE_FUNCTION(execdeattach); \
	DECLARE_FUNCTION(execattach);


#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASubjectCharacter(); \
	friend struct Z_Construct_UClass_ASubjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ASubjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObserverPattern"), NO_API) \
	DECLARE_SERIALIZER(ASubjectCharacter)


#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASubjectCharacter(); \
	friend struct Z_Construct_UClass_ASubjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ASubjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObserverPattern"), NO_API) \
	DECLARE_SERIALIZER(ASubjectCharacter)


#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASubjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASubjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubjectCharacter(ASubjectCharacter&&); \
	NO_API ASubjectCharacter(const ASubjectCharacter&); \
public:


#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubjectCharacter(ASubjectCharacter&&); \
	NO_API ASubjectCharacter(const ASubjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASubjectCharacter)


#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASubjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASubjectCharacter, FollowCamera); }


#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_12_PROLOG
#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_SPARSE_DATA \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_RPC_WRAPPERS \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_INCLASS \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_SPARSE_DATA \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
	ObserverPattern_Source_ObserverPattern_SubjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVERPATTERN_API UClass* StaticClass<class ASubjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObserverPattern_Source_ObserverPattern_SubjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
