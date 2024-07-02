// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPoolableActorInterface_generated_h
#error "SBZPoolableActorInterface.generated.h already included, missing '#pragma once' in SBZPoolableActorInterface.h"
#endif
#define STARBREEZE_SBZPoolableActorInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_RPC_WRAPPERS \
	virtual void OnPooled_Implementation() {}; \
	virtual void OnUnpooled_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnPooled); \
	DECLARE_FUNCTION(execOnUnpooled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPooled_Implementation() {}; \
	virtual void OnUnpooled_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnPooled); \
	DECLARE_FUNCTION(execOnUnpooled);


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPoolableActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPoolableActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPoolableActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPoolableActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPoolableActorInterface(USBZPoolableActorInterface&&); \
	NO_API USBZPoolableActorInterface(const USBZPoolableActorInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPoolableActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPoolableActorInterface(USBZPoolableActorInterface&&); \
	NO_API USBZPoolableActorInterface(const USBZPoolableActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPoolableActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPoolableActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPoolableActorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZPoolableActorInterface(); \
	friend struct Z_Construct_UClass_USBZPoolableActorInterface_Statics; \
public: \
	DECLARE_CLASS(USBZPoolableActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPoolableActorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZPoolableActorInterface() {} \
public: \
	typedef USBZPoolableActorInterface UClassType; \
	typedef ISBZPoolableActorInterface ThisClass; \
	static void Execute_OnPooled(UObject* O); \
	static void Execute_OnUnpooled(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZPoolableActorInterface() {} \
public: \
	typedef USBZPoolableActorInterface UClassType; \
	typedef ISBZPoolableActorInterface ThisClass; \
	static void Execute_OnPooled(UObject* O); \
	static void Execute_OnUnpooled(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPoolableActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPoolableActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
