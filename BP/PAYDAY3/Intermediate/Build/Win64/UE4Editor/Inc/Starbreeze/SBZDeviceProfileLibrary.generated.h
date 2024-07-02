// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZDeviceProfileOverrideMode : uint8;
#ifdef STARBREEZE_SBZDeviceProfileLibrary_generated_h
#error "SBZDeviceProfileLibrary.generated.h already included, missing '#pragma once' in SBZDeviceProfileLibrary.h"
#endif
#define STARBREEZE_SBZDeviceProfileLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execGetBaseDeviceProfileName); \
	DECLARE_FUNCTION(execOverrideDeviceProfileForMode); \
	DECLARE_FUNCTION(execRestoreDefaultDeviceProfile);


#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execGetBaseDeviceProfileName); \
	DECLARE_FUNCTION(execOverrideDeviceProfileForMode); \
	DECLARE_FUNCTION(execRestoreDefaultDeviceProfile);


#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZDeviceProfileLibrary(); \
	friend struct Z_Construct_UClass_USBZDeviceProfileLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZDeviceProfileLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDeviceProfileLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZDeviceProfileLibrary(); \
	friend struct Z_Construct_UClass_USBZDeviceProfileLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZDeviceProfileLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDeviceProfileLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZDeviceProfileLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZDeviceProfileLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDeviceProfileLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDeviceProfileLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDeviceProfileLibrary(USBZDeviceProfileLibrary&&); \
	NO_API USBZDeviceProfileLibrary(const USBZDeviceProfileLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDeviceProfileLibrary(USBZDeviceProfileLibrary&&); \
	NO_API USBZDeviceProfileLibrary(const USBZDeviceProfileLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDeviceProfileLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDeviceProfileLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZDeviceProfileLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZDeviceProfileLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDeviceProfileLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
