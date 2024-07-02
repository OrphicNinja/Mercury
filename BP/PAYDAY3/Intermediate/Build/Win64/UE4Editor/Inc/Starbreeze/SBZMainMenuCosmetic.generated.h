// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZCosmeticsPartSlot; class USBZModularPartDataAsset;
class USBZCosmeticsPartSlot; class USBZModularPartConfig;
enum class ESBZMainMenuCosmeticType : uint8;
enum class ESBZEquippableLoadoutSlot : uint8;
enum class ESBZItemCategory : uint8;
enum class ESBZMetaRequestResult : uint8;
class USBZCosmeticsDataAsset;
struct FSBZStoreBaseItem;
#ifdef STARBREEZE_SBZMainMenuCosmetic_generated_h
#error "SBZMainMenuCosmetic.generated.h already included, missing '#pragma once' in SBZMainMenuCosmetic.h"
#endif
#define STARBREEZE_SBZMainMenuCosmetic_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyEquippablePreview); \
	DECLARE_FUNCTION(execApplyMaskPreview); \
	DECLARE_FUNCTION(execBuy); \
	DECLARE_FUNCTION(execDisplay); \
	DECLARE_FUNCTION(execIsSelectButtonDown); \
	DECLARE_FUNCTION(execPopulateStoreItems);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyEquippablePreview); \
	DECLARE_FUNCTION(execApplyMaskPreview); \
	DECLARE_FUNCTION(execBuy); \
	DECLARE_FUNCTION(execDisplay); \
	DECLARE_FUNCTION(execIsSelectButtonDown); \
	DECLARE_FUNCTION(execPopulateStoreItems);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_EVENT_PARMS \
	struct SBZMainMenuCosmetic_eventBP_OnApplyPreviewDone_Parms \
	{ \
		bool bIsSuccess; \
		ESBZMetaRequestResult Result; \
	}; \
	struct SBZMainMenuCosmetic_eventBP_OnBuyDone_Parms \
	{ \
		bool bIsSuccess; \
		ESBZMetaRequestResult Result; \
	}; \
	struct SBZMainMenuCosmetic_eventOnAddStoreItem_Parms \
	{ \
		const USBZCosmeticsDataAsset* AssetData; \
		FSBZStoreBaseItem StoreData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCosmetic(); \
	friend struct Z_Construct_UClass_USBZMainMenuCosmetic_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCosmetic, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCosmetic)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuCosmetic(); \
	friend struct Z_Construct_UClass_USBZMainMenuCosmetic_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuCosmetic, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuCosmetic)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuCosmetic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuCosmetic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCosmetic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCosmetic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCosmetic(USBZMainMenuCosmetic&&); \
	NO_API USBZMainMenuCosmetic(const USBZMainMenuCosmetic&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuCosmetic(USBZMainMenuCosmetic&&); \
	NO_API USBZMainMenuCosmetic(const USBZMainMenuCosmetic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuCosmetic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuCosmetic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuCosmetic)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(USBZMainMenuCosmetic, Type); } \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZMainMenuCosmetic, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__Index() { return STRUCT_OFFSET(USBZMainMenuCosmetic, Index); } \
	FORCEINLINE static uint32 __PPO__AddEquippableMap() { return STRUCT_OFFSET(USBZMainMenuCosmetic, AddEquippableMap); } \
	FORCEINLINE static uint32 __PPO__LastBuyDataMap() { return STRUCT_OFFSET(USBZMainMenuCosmetic, LastBuyDataMap); } \
	FORCEINLINE static uint32 __PPO__LastFailedBuyDisplayName() { return STRUCT_OFFSET(USBZMainMenuCosmetic, LastFailedBuyDisplayName); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_17_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuCosmetic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuCosmetic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
