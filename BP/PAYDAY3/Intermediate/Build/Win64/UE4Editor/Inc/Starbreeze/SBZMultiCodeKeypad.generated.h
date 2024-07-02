// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMultiCodeKeypad_generated_h
#error "SBZMultiCodeKeypad.generated.h already included, missing '#pragma once' in SBZMultiCodeKeypad.h"
#endif
#define STARBREEZE_SBZMultiCodeKeypad_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentCodeIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentCodeIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_EVENT_PARMS \
	struct SBZMultiCodeKeypad_eventBP_OnCodeIndexChanged_Parms \
	{ \
		int32 CurrentIndex; \
		FText Identifier; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZMultiCodeKeypad(); \
	friend struct Z_Construct_UClass_ASBZMultiCodeKeypad_Statics; \
public: \
	DECLARE_CLASS(ASBZMultiCodeKeypad, ASBZKeypadBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMultiCodeKeypad) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentCodeIndex=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentCodeIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASBZMultiCodeKeypad(); \
	friend struct Z_Construct_UClass_ASBZMultiCodeKeypad_Statics; \
public: \
	DECLARE_CLASS(ASBZMultiCodeKeypad, ASBZKeypadBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMultiCodeKeypad) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentCodeIndex=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentCodeIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZMultiCodeKeypad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMultiCodeKeypad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMultiCodeKeypad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMultiCodeKeypad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMultiCodeKeypad(ASBZMultiCodeKeypad&&); \
	NO_API ASBZMultiCodeKeypad(const ASBZMultiCodeKeypad&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMultiCodeKeypad(ASBZMultiCodeKeypad&&); \
	NO_API ASBZMultiCodeKeypad(const ASBZMultiCodeKeypad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMultiCodeKeypad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMultiCodeKeypad); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMultiCodeKeypad)


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfCodes() { return STRUCT_OFFSET(ASBZMultiCodeKeypad, NumberOfCodes); } \
	FORCEINLINE static uint32 __PPO__CurrentCodeIndex() { return STRUCT_OFFSET(ASBZMultiCodeKeypad, CurrentCodeIndex); } \
	FORCEINLINE static uint32 __PPO__OnCorrectCodeEntered() { return STRUCT_OFFSET(ASBZMultiCodeKeypad, OnCorrectCodeEntered); } \
	FORCEINLINE static uint32 __PPO__CodeArray() { return STRUCT_OFFSET(ASBZMultiCodeKeypad, CodeArray); } \
	FORCEINLINE static uint32 __PPO__CodeIdentifierArray() { return STRUCT_OFFSET(ASBZMultiCodeKeypad, CodeIdentifierArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZMultiCodeKeypad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMultiCodeKeypad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
