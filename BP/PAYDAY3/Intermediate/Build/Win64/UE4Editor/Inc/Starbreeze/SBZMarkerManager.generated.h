// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMarkerDataAsset;
struct FVector;
#ifdef STARBREEZE_SBZMarkerManager_generated_h
#error "SBZMarkerManager.generated.h already included, missing '#pragma once' in SBZMarkerManager.h"
#endif
#define STARBREEZE_SBZMarkerManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_RPC_WRAPPERS \
	virtual void Multicast_AddMarker_Implementation(uint32 ID, const USBZMarkerDataAsset* MarkerAsset, FVector const& Translation); \
	virtual void Multicast_RemoveMarker_Implementation(uint32 ID); \
 \
	DECLARE_FUNCTION(execMulticast_AddMarker); \
	DECLARE_FUNCTION(execMulticast_RemoveMarker); \
	DECLARE_FUNCTION(execOnRep_ReplicatedMarkers);


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AddMarker_Implementation(uint32 ID, const USBZMarkerDataAsset* MarkerAsset, FVector const& Translation); \
	virtual void Multicast_RemoveMarker_Implementation(uint32 ID); \
 \
	DECLARE_FUNCTION(execMulticast_AddMarker); \
	DECLARE_FUNCTION(execMulticast_RemoveMarker); \
	DECLARE_FUNCTION(execOnRep_ReplicatedMarkers);


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_EVENT_PARMS \
	struct SBZMarkerManager_eventMulticast_AddMarker_Parms \
	{ \
		uint32 ID; \
		const USBZMarkerDataAsset* MarkerAsset; \
		FVector Translation; \
	}; \
	struct SBZMarkerManager_eventMulticast_RemoveMarker_Parms \
	{ \
		uint32 ID; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMarkerManager(); \
	friend struct Z_Construct_UClass_USBZMarkerManager_Statics; \
public: \
	DECLARE_CLASS(USBZMarkerManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMarkerManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedMarkers=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedMarkers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMarkerManager(); \
	friend struct Z_Construct_UClass_USBZMarkerManager_Statics; \
public: \
	DECLARE_CLASS(USBZMarkerManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMarkerManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedMarkers=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedMarkers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMarkerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMarkerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMarkerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMarkerManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMarkerManager(USBZMarkerManager&&); \
	NO_API USBZMarkerManager(const USBZMarkerManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMarkerManager(USBZMarkerManager&&); \
	NO_API USBZMarkerManager(const USBZMarkerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMarkerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMarkerManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMarkerManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedMarkers() { return STRUCT_OFFSET(USBZMarkerManager, ReplicatedMarkers); } \
	FORCEINLINE static uint32 __PPO__RuntimeMarkers() { return STRUCT_OFFSET(USBZMarkerManager, RuntimeMarkers); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMarkerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMarkerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
