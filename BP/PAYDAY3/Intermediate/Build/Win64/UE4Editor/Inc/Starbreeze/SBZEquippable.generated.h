// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZEquippable_generated_h
#error "SBZEquippable.generated.h already included, missing '#pragma once' in SBZEquippable.h"
#endif
#define STARBREEZE_SBZEquippable_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_EquippableIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_EquippableIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZEquippable(); \
	friend struct Z_Construct_UClass_ASBZEquippable_Statics; \
public: \
	DECLARE_CLASS(ASBZEquippable, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZEquippable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippableIndex=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquippableIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZEquippable(); \
	friend struct Z_Construct_UClass_ASBZEquippable_Statics; \
public: \
	DECLARE_CLASS(ASBZEquippable, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZEquippable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippableIndex=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquippableIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZEquippable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZEquippable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZEquippable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZEquippable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZEquippable(ASBZEquippable&&); \
	NO_API ASBZEquippable(const ASBZEquippable&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZEquippable(ASBZEquippable&&); \
	NO_API ASBZEquippable(const ASBZEquippable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZEquippable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZEquippable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZEquippable)


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ASBZEquippable, Mesh); } \
	FORCEINLINE static uint32 __PPO__EquippableIndex() { return STRUCT_OFFSET(ASBZEquippable, EquippableIndex); } \
	FORCEINLINE static uint32 __PPO__EquippableConfig() { return STRUCT_OFFSET(ASBZEquippable, EquippableConfig); } \
	FORCEINLINE static uint32 __PPO__ModOverrideGripAnimData() { return STRUCT_OFFSET(ASBZEquippable, ModOverrideGripAnimData); } \
	FORCEINLINE static uint32 __PPO__EquippableAkComponent() { return STRUCT_OFFSET(ASBZEquippable, EquippableAkComponent); } \
	FORCEINLINE static uint32 __PPO__EquippingEvent() { return STRUCT_OFFSET(ASBZEquippable, EquippingEvent); } \
	FORCEINLINE static uint32 __PPO__UnequippingEvent() { return STRUCT_OFFSET(ASBZEquippable, UnequippingEvent); } \
	FORCEINLINE static uint32 __PPO__EquippingEventRtpc() { return STRUCT_OFFSET(ASBZEquippable, EquippingEventRtpc); } \
	FORCEINLINE static uint32 __PPO__UnequippingEventRtpc() { return STRUCT_OFFSET(ASBZEquippable, UnequippingEventRtpc); } \
	FORCEINLINE static uint32 __PPO__bReplicateRootAttachment() { return STRUCT_OFFSET(ASBZEquippable, bReplicateRootAttachment); } \
	FORCEINLINE static uint32 __PPO__EquipmentState() { return STRUCT_OFFSET(ASBZEquippable, EquipmentState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZEquippable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
