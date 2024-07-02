// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPopupWidgetInterface_generated_h
#error "SBZPopupWidgetInterface.generated.h already included, missing '#pragma once' in SBZPopupWidgetInterface.h"
#endif
#define STARBREEZE_SBZPopupWidgetInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPopupWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPopupWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPopupWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPopupWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPopupWidgetInterface(USBZPopupWidgetInterface&&); \
	NO_API USBZPopupWidgetInterface(const USBZPopupWidgetInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPopupWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPopupWidgetInterface(USBZPopupWidgetInterface&&); \
	NO_API USBZPopupWidgetInterface(const USBZPopupWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPopupWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPopupWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPopupWidgetInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZPopupWidgetInterface(); \
	friend struct Z_Construct_UClass_USBZPopupWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(USBZPopupWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPopupWidgetInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZPopupWidgetInterface() {} \
public: \
	typedef USBZPopupWidgetInterface UClassType; \
	typedef ISBZPopupWidgetInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZPopupWidgetInterface() {} \
public: \
	typedef USBZPopupWidgetInterface UClassType; \
	typedef ISBZPopupWidgetInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_6_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPopupWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPopupWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
