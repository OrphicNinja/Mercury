// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZBagHandle;
class USBZBagType;
#ifdef STARBREEZE_SBZSecuredBagVisualizeComponent_generated_h
#error "SBZSecuredBagVisualizeComponent.generated.h already included, missing '#pragma once' in SBZSecuredBagVisualizeComponent.h"
#endif
#define STARBREEZE_SBZSecuredBagVisualizeComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_RPC_WRAPPERS \
	virtual void Multicast_AddBagType_Implementation(const USBZBagType* BagType); \
 \
	DECLARE_FUNCTION(execAddBagHandle); \
	DECLARE_FUNCTION(execMulticast_AddBagType); \
	DECLARE_FUNCTION(execOnRep_BagTypes);


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AddBagType_Implementation(const USBZBagType* BagType); \
 \
	DECLARE_FUNCTION(execAddBagHandle); \
	DECLARE_FUNCTION(execMulticast_AddBagType); \
	DECLARE_FUNCTION(execOnRep_BagTypes);


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_EVENT_PARMS \
	struct SBZSecuredBagVisualizeComponent_eventMulticast_AddBagType_Parms \
	{ \
		const USBZBagType* BagType; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSecuredBagVisualizeComponent(); \
	friend struct Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics; \
public: \
	DECLARE_CLASS(USBZSecuredBagVisualizeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSecuredBagVisualizeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BagTypes=NETFIELD_REP_START, \
		NETFIELD_REP_END=BagTypes	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSecuredBagVisualizeComponent(); \
	friend struct Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics; \
public: \
	DECLARE_CLASS(USBZSecuredBagVisualizeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSecuredBagVisualizeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BagTypes=NETFIELD_REP_START, \
		NETFIELD_REP_END=BagTypes	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSecuredBagVisualizeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSecuredBagVisualizeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSecuredBagVisualizeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSecuredBagVisualizeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSecuredBagVisualizeComponent(USBZSecuredBagVisualizeComponent&&); \
	NO_API USBZSecuredBagVisualizeComponent(const USBZSecuredBagVisualizeComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSecuredBagVisualizeComponent(USBZSecuredBagVisualizeComponent&&); \
	NO_API USBZSecuredBagVisualizeComponent(const USBZSecuredBagVisualizeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSecuredBagVisualizeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSecuredBagVisualizeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSecuredBagVisualizeComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BagTypes() { return STRUCT_OFFSET(USBZSecuredBagVisualizeComponent, BagTypes); } \
	FORCEINLINE static uint32 __PPO__SpawnLocationArray() { return STRUCT_OFFSET(USBZSecuredBagVisualizeComponent, SpawnLocationArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSecuredBagVisualizeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSecuredBagVisualizeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
