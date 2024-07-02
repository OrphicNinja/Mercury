// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZRoomConnectorInterface_generated_h
#error "SBZRoomConnectorInterface.generated.h already included, missing '#pragma once' in SBZRoomConnectorInterface.h"
#endif
#define STARBREEZE_SBZRoomConnectorInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZRoomConnectorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRoomConnectorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRoomConnectorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRoomConnectorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRoomConnectorInterface(USBZRoomConnectorInterface&&); \
	NO_API USBZRoomConnectorInterface(const USBZRoomConnectorInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZRoomConnectorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRoomConnectorInterface(USBZRoomConnectorInterface&&); \
	NO_API USBZRoomConnectorInterface(const USBZRoomConnectorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRoomConnectorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRoomConnectorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRoomConnectorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZRoomConnectorInterface(); \
	friend struct Z_Construct_UClass_USBZRoomConnectorInterface_Statics; \
public: \
	DECLARE_CLASS(USBZRoomConnectorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRoomConnectorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZRoomConnectorInterface() {} \
public: \
	typedef USBZRoomConnectorInterface UClassType; \
	typedef ISBZRoomConnectorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZRoomConnectorInterface() {} \
public: \
	typedef USBZRoomConnectorInterface UClassType; \
	typedef ISBZRoomConnectorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_6_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZRoomConnectorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRoomConnectorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
