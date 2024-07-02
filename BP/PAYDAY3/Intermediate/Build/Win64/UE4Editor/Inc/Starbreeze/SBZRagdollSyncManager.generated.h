// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZRagdollSyncData;
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_SBZRagdollSyncManager_generated_h
#error "SBZRagdollSyncManager.generated.h already included, missing '#pragma once' in SBZRagdollSyncManager.h"
#endif
#define STARBREEZE_SBZRagdollSyncManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_RPC_WRAPPERS \
	virtual void Multicast_RagdollSyncData_Implementation(TArray<FSBZRagdollSyncData> const& InRagdollSyncData); \
 \
	DECLARE_FUNCTION(execMulticast_RagdollSyncData); \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_RagdollSyncData_Implementation(TArray<FSBZRagdollSyncData> const& InRagdollSyncData); \
 \
	DECLARE_FUNCTION(execMulticast_RagdollSyncData); \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_EVENT_PARMS \
	struct SBZRagdollSyncManager_eventMulticast_RagdollSyncData_Parms \
	{ \
		TArray<FSBZRagdollSyncData> InRagdollSyncData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZRagdollSyncManager(); \
	friend struct Z_Construct_UClass_USBZRagdollSyncManager_Statics; \
public: \
	DECLARE_CLASS(USBZRagdollSyncManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRagdollSyncManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Ragdolls=NETFIELD_REP_START, \
		NETFIELD_REP_END=Ragdolls	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZRagdollSyncManager(); \
	friend struct Z_Construct_UClass_USBZRagdollSyncManager_Statics; \
public: \
	DECLARE_CLASS(USBZRagdollSyncManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRagdollSyncManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Ragdolls=NETFIELD_REP_START, \
		NETFIELD_REP_END=Ragdolls	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZRagdollSyncManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRagdollSyncManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRagdollSyncManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRagdollSyncManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRagdollSyncManager(USBZRagdollSyncManager&&); \
	NO_API USBZRagdollSyncManager(const USBZRagdollSyncManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRagdollSyncManager(USBZRagdollSyncManager&&); \
	NO_API USBZRagdollSyncManager(const USBZRagdollSyncManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRagdollSyncManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRagdollSyncManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRagdollSyncManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ragdolls() { return STRUCT_OFFSET(USBZRagdollSyncManager, Ragdolls); }


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZRagdollSyncManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRagdollSyncManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
