// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZLoadingState_generated_h
#error "SBZLoadingState.generated.h already included, missing '#pragma once' in SBZLoadingState.h"
#endif
#define STARBREEZE_SBZLoadingState_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_RPC_WRAPPERS \
	virtual bool ServerSetLoadingProgress_Validate(float ); \
	virtual void ServerSetLoadingProgress_Implementation(float InLoadingProgress); \
 \
	DECLARE_FUNCTION(execServerSetLoadingProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetLoadingProgress_Validate(float ); \
	virtual void ServerSetLoadingProgress_Implementation(float InLoadingProgress); \
 \
	DECLARE_FUNCTION(execServerSetLoadingProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_EVENT_PARMS \
	struct SBZLoadingState_eventServerSetLoadingProgress_Parms \
	{ \
		float InLoadingProgress; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLoadingState(); \
	friend struct Z_Construct_UClass_ASBZLoadingState_Statics; \
public: \
	DECLARE_CLASS(ASBZLoadingState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLoadingState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LoadingProgress=NETFIELD_REP_START, \
		NETFIELD_REP_END=LoadingProgress	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_INCLASS \
private: \
	static void StaticRegisterNativesASBZLoadingState(); \
	friend struct Z_Construct_UClass_ASBZLoadingState_Statics; \
public: \
	DECLARE_CLASS(ASBZLoadingState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLoadingState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LoadingProgress=NETFIELD_REP_START, \
		NETFIELD_REP_END=LoadingProgress	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLoadingState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLoadingState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLoadingState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLoadingState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLoadingState(ASBZLoadingState&&); \
	NO_API ASBZLoadingState(const ASBZLoadingState&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLoadingState(ASBZLoadingState&&); \
	NO_API ASBZLoadingState(const ASBZLoadingState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLoadingState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLoadingState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLoadingState)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadingProgress() { return STRUCT_OFFSET(ASBZLoadingState, LoadingProgress); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLoadingState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLoadingState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
