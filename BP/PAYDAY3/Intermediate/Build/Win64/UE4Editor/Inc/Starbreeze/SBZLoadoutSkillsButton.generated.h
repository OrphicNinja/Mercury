// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZSkillData;
#ifdef STARBREEZE_SBZLoadoutSkillsButton_generated_h
#error "SBZLoadoutSkillsButton.generated.h already included, missing '#pragma once' in SBZLoadoutSkillsButton.h"
#endif
#define STARBREEZE_SBZLoadoutSkillsButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeInitializeSkills);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeInitializeSkills);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_EVENT_PARMS \
	struct SBZLoadoutSkillsButton_eventInitializeSkills_Parms \
	{ \
		int32 EquippedSkillCount; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLoadoutSkillsButton(); \
	friend struct Z_Construct_UClass_USBZLoadoutSkillsButton_Statics; \
public: \
	DECLARE_CLASS(USBZLoadoutSkillsButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoadoutSkillsButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLoadoutSkillsButton(); \
	friend struct Z_Construct_UClass_USBZLoadoutSkillsButton_Statics; \
public: \
	DECLARE_CLASS(USBZLoadoutSkillsButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoadoutSkillsButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLoadoutSkillsButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLoadoutSkillsButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoadoutSkillsButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoadoutSkillsButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoadoutSkillsButton(USBZLoadoutSkillsButton&&); \
	NO_API USBZLoadoutSkillsButton(const USBZLoadoutSkillsButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoadoutSkillsButton(USBZLoadoutSkillsButton&&); \
	NO_API USBZLoadoutSkillsButton(const USBZLoadoutSkillsButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoadoutSkillsButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoadoutSkillsButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZLoadoutSkillsButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkillLineCountDataArray() { return STRUCT_OFFSET(USBZLoadoutSkillsButton, SkillLineCountDataArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLoadoutSkillsButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLoadoutSkillsButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
