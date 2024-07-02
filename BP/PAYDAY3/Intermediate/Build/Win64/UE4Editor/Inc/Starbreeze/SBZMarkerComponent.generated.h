// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMarkerState : uint8;
#ifdef STARBREEZE_SBZMarkerComponent_generated_h
#error "SBZMarkerComponent.generated.h already included, missing '#pragma once' in SBZMarkerComponent.h"
#endif
#define STARBREEZE_SBZMarkerComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_RPC_WRAPPERS \
	virtual void Multicast_SetMarkerState_Implementation(ESBZMarkerState RepMarkerState); \
 \
	DECLARE_FUNCTION(execMulticast_SetMarkerState); \
	DECLARE_FUNCTION(execOnRep_MarkerState);


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetMarkerState_Implementation(ESBZMarkerState RepMarkerState); \
 \
	DECLARE_FUNCTION(execMulticast_SetMarkerState); \
	DECLARE_FUNCTION(execOnRep_MarkerState);


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_EVENT_PARMS \
	struct SBZMarkerComponent_eventMulticast_SetMarkerState_Parms \
	{ \
		ESBZMarkerState RepMarkerState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMarkerComponent(); \
	friend struct Z_Construct_UClass_USBZMarkerComponent_Statics; \
public: \
	DECLARE_CLASS(USBZMarkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMarkerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MarkerState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MarkerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMarkerComponent(); \
	friend struct Z_Construct_UClass_USBZMarkerComponent_Statics; \
public: \
	DECLARE_CLASS(USBZMarkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMarkerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MarkerState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MarkerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMarkerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMarkerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMarkerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMarkerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMarkerComponent(USBZMarkerComponent&&); \
	NO_API USBZMarkerComponent(const USBZMarkerComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMarkerComponent(USBZMarkerComponent&&); \
	NO_API USBZMarkerComponent(const USBZMarkerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMarkerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMarkerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMarkerComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MarkerAssets() { return STRUCT_OFFSET(USBZMarkerComponent, MarkerAssets); } \
	FORCEINLINE static uint32 __PPO__MarkerPriority() { return STRUCT_OFFSET(USBZMarkerComponent, MarkerPriority); } \
	FORCEINLINE static uint32 __PPO__MarkerOffset() { return STRUCT_OFFSET(USBZMarkerComponent, MarkerOffset); } \
	FORCEINLINE static uint32 __PPO__MarkerSocketName() { return STRUCT_OFFSET(USBZMarkerComponent, MarkerSocketName); } \
	FORCEINLINE static uint32 __PPO__AttachComponentSelector() { return STRUCT_OFFSET(USBZMarkerComponent, AttachComponentSelector); } \
	FORCEINLINE static uint32 __PPO__MarkerState() { return STRUCT_OFFSET(USBZMarkerComponent, MarkerState); } \
	FORCEINLINE static uint32 __PPO__AttachComponent() { return STRUCT_OFFSET(USBZMarkerComponent, AttachComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMarkerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMarkerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
