// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef STARBREEZE_SBZAIAttractorInterface_generated_h
#error "SBZAIAttractorInterface.generated.h already included, missing '#pragma once' in SBZAIAttractorInterface.h"
#endif
#define STARBREEZE_SBZAIAttractorInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIAttractorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIAttractorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAttractorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAttractorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAttractorInterface(USBZAIAttractorInterface&&); \
	NO_API USBZAIAttractorInterface(const USBZAIAttractorInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAIAttractorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAIAttractorInterface(USBZAIAttractorInterface&&); \
	NO_API USBZAIAttractorInterface(const USBZAIAttractorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAIAttractorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAIAttractorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAIAttractorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZAIAttractorInterface(); \
	friend struct Z_Construct_UClass_USBZAIAttractorInterface_Statics; \
public: \
	DECLARE_CLASS(USBZAIAttractorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAIAttractorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZAIAttractorInterface() {} \
public: \
	typedef USBZAIAttractorInterface UClassType; \
	typedef ISBZAIAttractorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZAIAttractorInterface() {} \
public: \
	typedef USBZAIAttractorInterface UClassType; \
	typedef ISBZAIAttractorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAIAttractorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIAttractorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
