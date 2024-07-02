// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAimAssistComponent_generated_h
#error "SBZAimAssistComponent.generated.h already included, missing '#pragma once' in SBZAimAssistComponent.h"
#endif
#define STARBREEZE_SBZAimAssistComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAimAssistComponent(); \
	friend struct Z_Construct_UClass_USBZAimAssistComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAimAssistComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAimAssistComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAimAssistComponent(); \
	friend struct Z_Construct_UClass_USBZAimAssistComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAimAssistComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAimAssistComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAimAssistComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAimAssistComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAimAssistComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAimAssistComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAimAssistComponent(USBZAimAssistComponent&&); \
	NO_API USBZAimAssistComponent(const USBZAimAssistComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAimAssistComponent(USBZAimAssistComponent&&); \
	NO_API USBZAimAssistComponent(const USBZAimAssistComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAimAssistComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAimAssistComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAimAssistComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCharacter() { return STRUCT_OFFSET(USBZAimAssistComponent, PlayerCharacter); } \
	FORCEINLINE static uint32 __PPO__CurrentTarget() { return STRUCT_OFFSET(USBZAimAssistComponent, CurrentTarget); } \
	FORCEINLINE static uint32 __PPO__LastTarget() { return STRUCT_OFFSET(USBZAimAssistComponent, LastTarget); } \
	FORCEINLINE static uint32 __PPO__BulletMagnetismCandidateArray() { return STRUCT_OFFSET(USBZAimAssistComponent, BulletMagnetismCandidateArray); } \
	FORCEINLINE static uint32 __PPO__MaxFireTime() { return STRUCT_OFFSET(USBZAimAssistComponent, MaxFireTime); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAimAssistComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAimAssistComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
