// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZPhoneScreenState : uint8;
#ifdef STARBREEZE_SBZPhoneTool_generated_h
#error "SBZPhoneTool.generated.h already included, missing '#pragma once' in SBZPhoneTool.h"
#endif
#define STARBREEZE_SBZPhoneTool_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_RPC_WRAPPERS \
	virtual void Multicast_ToggleScreenMode_Implementation(ESBZPhoneScreenState NewScreenState); \
 \
	DECLARE_FUNCTION(execMulticast_ToggleScreenMode);


#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ToggleScreenMode_Implementation(ESBZPhoneScreenState NewScreenState); \
 \
	DECLARE_FUNCTION(execMulticast_ToggleScreenMode);


#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_EVENT_PARMS \
	struct SBZPhoneTool_eventMulticast_ToggleScreenMode_Parms \
	{ \
		ESBZPhoneScreenState NewScreenState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZPhoneTool(); \
	friend struct Z_Construct_UClass_ASBZPhoneTool_Statics; \
public: \
	DECLARE_CLASS(ASBZPhoneTool, ASBZTool, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPhoneTool) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPhoneTool*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZPhoneTool(); \
	friend struct Z_Construct_UClass_ASBZPhoneTool_Statics; \
public: \
	DECLARE_CLASS(ASBZPhoneTool, ASBZTool, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZPhoneTool) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZPhoneTool*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZPhoneTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPhoneTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPhoneTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPhoneTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPhoneTool(ASBZPhoneTool&&); \
	NO_API ASBZPhoneTool(const ASBZPhoneTool&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZPhoneTool(ASBZPhoneTool&&); \
	NO_API ASBZPhoneTool(const ASBZPhoneTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZPhoneTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZPhoneTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZPhoneTool)


#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZPhoneTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPhoneTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
