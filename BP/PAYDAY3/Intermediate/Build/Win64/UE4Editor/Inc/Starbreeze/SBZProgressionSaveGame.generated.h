// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZEquippableLoadoutSlot : uint8;
struct FSBZGloveInventorySlot;
struct FSBZMaskInventorySlot;
struct FSBZPlayerCosmeticsConfig;
struct FSBZSuitInventorySlot;
struct FSBZWeaponInventorySlot;
#ifdef STARBREEZE_SBZProgressionSaveGame_generated_h
#error "SBZProgressionSaveGame.generated.h already included, missing '#pragma once' in SBZProgressionSaveGame.h"
#endif
#define STARBREEZE_SBZProgressionSaveGame_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEquippedWeaponInventorySlotIndex); \
	DECLARE_FUNCTION(execGetGloveInventorySlotArray); \
	DECLARE_FUNCTION(execGetMaskInventorySlotArray); \
	DECLARE_FUNCTION(execGetPlayerCosmeticsConfigArrayForPlatform); \
	DECLARE_FUNCTION(execGetSuitInventorySlotArray); \
	DECLARE_FUNCTION(execGetUncheckedGloveInventorySlotArray); \
	DECLARE_FUNCTION(execGetUncheckedMaskInventorySlotArray); \
	DECLARE_FUNCTION(execGetUncheckedSuitInventorySlotArray); \
	DECLARE_FUNCTION(execGetWeaponInventorySlotArray);


#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEquippedWeaponInventorySlotIndex); \
	DECLARE_FUNCTION(execGetGloveInventorySlotArray); \
	DECLARE_FUNCTION(execGetMaskInventorySlotArray); \
	DECLARE_FUNCTION(execGetPlayerCosmeticsConfigArrayForPlatform); \
	DECLARE_FUNCTION(execGetSuitInventorySlotArray); \
	DECLARE_FUNCTION(execGetUncheckedGloveInventorySlotArray); \
	DECLARE_FUNCTION(execGetUncheckedMaskInventorySlotArray); \
	DECLARE_FUNCTION(execGetUncheckedSuitInventorySlotArray); \
	DECLARE_FUNCTION(execGetWeaponInventorySlotArray);


#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZProgressionSaveGame(); \
	friend struct Z_Construct_UClass_USBZProgressionSaveGame_Statics; \
public: \
	DECLARE_CLASS(USBZProgressionSaveGame, USBZSaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZProgressionSaveGame) \
	virtual UObject* _getUObject() const override { return const_cast<USBZProgressionSaveGame*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZProgressionSaveGame(); \
	friend struct Z_Construct_UClass_USBZProgressionSaveGame_Statics; \
public: \
	DECLARE_CLASS(USBZProgressionSaveGame, USBZSaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZProgressionSaveGame) \
	virtual UObject* _getUObject() const override { return const_cast<USBZProgressionSaveGame*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZProgressionSaveGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZProgressionSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZProgressionSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZProgressionSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZProgressionSaveGame(USBZProgressionSaveGame&&); \
	NO_API USBZProgressionSaveGame(const USBZProgressionSaveGame&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZProgressionSaveGame(USBZProgressionSaveGame&&); \
	NO_API USBZProgressionSaveGame(const USBZProgressionSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZProgressionSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZProgressionSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZProgressionSaveGame)


#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProgressionSaveGameData() { return STRUCT_OFFSET(USBZProgressionSaveGame, ProgressionSaveGameData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZProgressionSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZProgressionSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
