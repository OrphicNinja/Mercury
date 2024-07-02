// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef STARBREEZE_SBZTagEventInterface_generated_h
#error "SBZTagEventInterface.generated.h already included, missing '#pragma once' in SBZTagEventInterface.h"
#endif
#define STARBREEZE_SBZTagEventInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_RPC_WRAPPERS \
	virtual void HandleTagActive_Implementation(FGameplayTag const& EventTag, bool bActive) {}; \
 \
	DECLARE_FUNCTION(execHandleTagActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleTagActive_Implementation(FGameplayTag const& EventTag, bool bActive) {}; \
 \
	DECLARE_FUNCTION(execHandleTagActive);


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_EVENT_PARMS \
	struct SBZTagEventInterface_eventHandleTagActive_Parms \
	{ \
		FGameplayTag EventTag; \
		bool bActive; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTagEventInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTagEventInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTagEventInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTagEventInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTagEventInterface(USBZTagEventInterface&&); \
	NO_API USBZTagEventInterface(const USBZTagEventInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTagEventInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTagEventInterface(USBZTagEventInterface&&); \
	NO_API USBZTagEventInterface(const USBZTagEventInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTagEventInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTagEventInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTagEventInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZTagEventInterface(); \
	friend struct Z_Construct_UClass_USBZTagEventInterface_Statics; \
public: \
	DECLARE_CLASS(USBZTagEventInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTagEventInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZTagEventInterface() {} \
public: \
	typedef USBZTagEventInterface UClassType; \
	typedef ISBZTagEventInterface ThisClass; \
	static void Execute_HandleTagActive(UObject* O, FGameplayTag const& EventTag, bool bActive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZTagEventInterface() {} \
public: \
	typedef USBZTagEventInterface UClassType; \
	typedef ISBZTagEventInterface ThisClass; \
	static void Execute_HandleTagActive(UObject* O, FGameplayTag const& EventTag, bool bActive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZTagEventInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTagEventInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
