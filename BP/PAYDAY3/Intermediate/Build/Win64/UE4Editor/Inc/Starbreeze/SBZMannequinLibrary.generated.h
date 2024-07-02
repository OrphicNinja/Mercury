// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ASBZMainMenuPlayerCharacter;
enum class ESBZInventoryEquipmentType : uint8;
struct FSBZEquippableConfig;
class UAnimSequenceBase;
#ifdef STARBREEZE_SBZMannequinLibrary_generated_h
#error "SBZMannequinLibrary.generated.h already included, missing '#pragma once' in SBZMannequinLibrary.h"
#endif
#define STARBREEZE_SBZMannequinLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMainMenuMannequin); \
	DECLARE_FUNCTION(execGetMultiplayerMannequin); \
	DECLARE_FUNCTION(execRefreshMainMenuMannequin); \
	DECLARE_FUNCTION(execSetMainMenuMannequinEquipment); \
	DECLARE_FUNCTION(execSetMainMenuMannequinLoadout); \
	DECLARE_FUNCTION(execSetMainMenuMannequinPose);


#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMainMenuMannequin); \
	DECLARE_FUNCTION(execGetMultiplayerMannequin); \
	DECLARE_FUNCTION(execRefreshMainMenuMannequin); \
	DECLARE_FUNCTION(execSetMainMenuMannequinEquipment); \
	DECLARE_FUNCTION(execSetMainMenuMannequinLoadout); \
	DECLARE_FUNCTION(execSetMainMenuMannequinPose);


#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMannequinLibrary(); \
	friend struct Z_Construct_UClass_USBZMannequinLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZMannequinLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMannequinLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMannequinLibrary(); \
	friend struct Z_Construct_UClass_USBZMannequinLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZMannequinLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMannequinLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMannequinLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMannequinLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMannequinLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMannequinLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMannequinLibrary(USBZMannequinLibrary&&); \
	NO_API USBZMannequinLibrary(const USBZMannequinLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMannequinLibrary(USBZMannequinLibrary&&); \
	NO_API USBZMannequinLibrary(const USBZMannequinLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMannequinLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMannequinLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMannequinLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMannequinLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMannequinLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
