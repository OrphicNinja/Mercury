// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZBagItem;
struct FSBZBagHandle;
#ifdef STARBREEZE_SBZBagTriggerVolume_generated_h
#error "SBZBagTriggerVolume.generated.h already included, missing '#pragma once' in SBZBagTriggerVolume.h"
#endif
#define STARBREEZE_SBZBagTriggerVolume_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_RPC_WRAPPERS \
	virtual bool CheckCustomBagFilter_Implementation(ASBZBagItem* BagItem, FSBZBagHandle BagHandle); \
 \
	DECLARE_FUNCTION(execCheckCustomBagFilter); \
	DECLARE_FUNCTION(execFilterBag); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execManuallySecureBag); \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CheckCustomBagFilter_Implementation(ASBZBagItem* BagItem, FSBZBagHandle BagHandle); \
 \
	DECLARE_FUNCTION(execCheckCustomBagFilter); \
	DECLARE_FUNCTION(execFilterBag); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execManuallySecureBag); \
	DECLARE_FUNCTION(execSetVolumeEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_EVENT_PARMS \
	struct SBZBagTriggerVolume_eventCheckCustomBagFilter_Parms \
	{ \
		ASBZBagItem* BagItem; \
		FSBZBagHandle BagHandle; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZBagTriggerVolume_eventCheckCustomBagFilter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZBagTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZBagTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZBagTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZBagTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASBZBagTriggerVolume(); \
	friend struct Z_Construct_UClass_ASBZBagTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(ASBZBagTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), STARBREEZE_API) \
	DECLARE_SERIALIZER(ASBZBagTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARBREEZE_API ASBZBagTriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBagTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZBagTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBagTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZBagTriggerVolume(ASBZBagTriggerVolume&&); \
	STARBREEZE_API ASBZBagTriggerVolume(const ASBZBagTriggerVolume&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARBREEZE_API ASBZBagTriggerVolume(ASBZBagTriggerVolume&&); \
	STARBREEZE_API ASBZBagTriggerVolume(const ASBZBagTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARBREEZE_API, ASBZBagTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZBagTriggerVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZBagTriggerVolume)


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerMode() { return STRUCT_OFFSET(ASBZBagTriggerVolume, TriggerMode); } \
	FORCEINLINE static uint32 __PPO__Target() { return STRUCT_OFFSET(ASBZBagTriggerVolume, Target); } \
	FORCEINLINE static uint32 __PPO__BagTypeArray() { return STRUCT_OFFSET(ASBZBagTriggerVolume, BagTypeArray); } \
	FORCEINLINE static uint32 __PPO__BagTeleportPoint() { return STRUCT_OFFSET(ASBZBagTriggerVolume, BagTeleportPoint); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_16_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZBagTriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
