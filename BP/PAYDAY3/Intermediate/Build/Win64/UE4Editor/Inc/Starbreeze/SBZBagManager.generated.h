// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZBagHandle;
class AActor;
class USBZBagType;
class UObject;
class USBZBagManager;
struct FSBZBagPersistentData;
#ifdef STARBREEZE_SBZBagManager_generated_h
#error "SBZBagManager.generated.h already included, missing '#pragma once' in SBZBagManager.h"
#endif
#define STARBREEZE_SBZBagManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_RPC_WRAPPERS \
	virtual void Multicast_ClaimBag_Implementation(const int32 BagId, AActor* Actor); \
	virtual void Multicast_CreateBag_Implementation(const int32 BagId, const USBZBagType* BagType); \
	virtual void Multicast_CreateBagArray_Implementation(const int32 FirstBagId, const USBZBagType* BagType, const int32 NumberOfBags); \
	virtual void Multicast_RemoveBag_Implementation(const int32 BagId); \
	virtual void Multicast_RemoveClaim_Implementation(const int32 BagId); \
	virtual void Multicast_SecureBag_Implementation(const int32 BagId, bool bClearClaim); \
 \
	DECLARE_FUNCTION(execClaimBag); \
	DECLARE_FUNCTION(execCreateBag); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetValidBagData); \
	DECLARE_FUNCTION(execIsValidHandle); \
	DECLARE_FUNCTION(execMulticast_ClaimBag); \
	DECLARE_FUNCTION(execMulticast_CreateBag); \
	DECLARE_FUNCTION(execMulticast_CreateBagArray); \
	DECLARE_FUNCTION(execMulticast_RemoveBag); \
	DECLARE_FUNCTION(execMulticast_RemoveClaim); \
	DECLARE_FUNCTION(execMulticast_SecureBag); \
	DECLARE_FUNCTION(execOnRep_Bags); \
	DECLARE_FUNCTION(execRemoveClaim); \
	DECLARE_FUNCTION(execSecureBag); \
	DECLARE_FUNCTION(execTryRemoveClaim);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ClaimBag_Implementation(const int32 BagId, AActor* Actor); \
	virtual void Multicast_CreateBag_Implementation(const int32 BagId, const USBZBagType* BagType); \
	virtual void Multicast_CreateBagArray_Implementation(const int32 FirstBagId, const USBZBagType* BagType, const int32 NumberOfBags); \
	virtual void Multicast_RemoveBag_Implementation(const int32 BagId); \
	virtual void Multicast_RemoveClaim_Implementation(const int32 BagId); \
	virtual void Multicast_SecureBag_Implementation(const int32 BagId, bool bClearClaim); \
 \
	DECLARE_FUNCTION(execClaimBag); \
	DECLARE_FUNCTION(execCreateBag); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetValidBagData); \
	DECLARE_FUNCTION(execIsValidHandle); \
	DECLARE_FUNCTION(execMulticast_ClaimBag); \
	DECLARE_FUNCTION(execMulticast_CreateBag); \
	DECLARE_FUNCTION(execMulticast_CreateBagArray); \
	DECLARE_FUNCTION(execMulticast_RemoveBag); \
	DECLARE_FUNCTION(execMulticast_RemoveClaim); \
	DECLARE_FUNCTION(execMulticast_SecureBag); \
	DECLARE_FUNCTION(execOnRep_Bags); \
	DECLARE_FUNCTION(execRemoveClaim); \
	DECLARE_FUNCTION(execSecureBag); \
	DECLARE_FUNCTION(execTryRemoveClaim);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_EVENT_PARMS \
	struct SBZBagManager_eventMulticast_ClaimBag_Parms \
	{ \
		int32 BagId; \
		AActor* Actor; \
	}; \
	struct SBZBagManager_eventMulticast_CreateBag_Parms \
	{ \
		int32 BagId; \
		const USBZBagType* BagType; \
	}; \
	struct SBZBagManager_eventMulticast_CreateBagArray_Parms \
	{ \
		int32 FirstBagId; \
		const USBZBagType* BagType; \
		int32 NumberOfBags; \
	}; \
	struct SBZBagManager_eventMulticast_RemoveBag_Parms \
	{ \
		int32 BagId; \
	}; \
	struct SBZBagManager_eventMulticast_RemoveClaim_Parms \
	{ \
		int32 BagId; \
	}; \
	struct SBZBagManager_eventMulticast_SecureBag_Parms \
	{ \
		int32 BagId; \
		bool bClearClaim; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBagManager(); \
	friend struct Z_Construct_UClass_USBZBagManager_Statics; \
public: \
	DECLARE_CLASS(USBZBagManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBagManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Bags=NETFIELD_REP_START, \
		NETFIELD_REP_END=Bags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBagManager(); \
	friend struct Z_Construct_UClass_USBZBagManager_Statics; \
public: \
	DECLARE_CLASS(USBZBagManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBagManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Bags=NETFIELD_REP_START, \
		NETFIELD_REP_END=Bags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBagManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBagManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBagManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBagManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBagManager(USBZBagManager&&); \
	NO_API USBZBagManager(const USBZBagManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBagManager(USBZBagManager&&); \
	NO_API USBZBagManager(const USBZBagManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBagManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBagManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBagManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Bags() { return STRUCT_OFFSET(USBZBagManager, Bags); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBagManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
