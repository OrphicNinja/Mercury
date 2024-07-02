// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZActorFilterComponent;
#ifdef STARBREEZE_SBZHoldOutTriggerVolumeInterface_generated_h
#error "SBZHoldOutTriggerVolumeInterface.generated.h already included, missing '#pragma once' in SBZHoldOutTriggerVolumeInterface.h"
#endif
#define STARBREEZE_SBZHoldOutTriggerVolumeInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_RPC_WRAPPERS \
	virtual USBZActorFilterComponent* GetActorFilterComponent_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetActorFilterComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USBZActorFilterComponent* GetActorFilterComponent_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetActorFilterComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_EVENT_PARMS \
	struct SBZHoldOutTriggerVolumeInterface_eventGetActorFilterComponent_Parms \
	{ \
		USBZActorFilterComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZHoldOutTriggerVolumeInterface_eventGetActorFilterComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHoldOutTriggerVolumeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHoldOutTriggerVolumeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutTriggerVolumeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutTriggerVolumeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutTriggerVolumeInterface(USBZHoldOutTriggerVolumeInterface&&); \
	NO_API USBZHoldOutTriggerVolumeInterface(const USBZHoldOutTriggerVolumeInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHoldOutTriggerVolumeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutTriggerVolumeInterface(USBZHoldOutTriggerVolumeInterface&&); \
	NO_API USBZHoldOutTriggerVolumeInterface(const USBZHoldOutTriggerVolumeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutTriggerVolumeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutTriggerVolumeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHoldOutTriggerVolumeInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZHoldOutTriggerVolumeInterface(); \
	friend struct Z_Construct_UClass_USBZHoldOutTriggerVolumeInterface_Statics; \
public: \
	DECLARE_CLASS(USBZHoldOutTriggerVolumeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHoldOutTriggerVolumeInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZHoldOutTriggerVolumeInterface() {} \
public: \
	typedef USBZHoldOutTriggerVolumeInterface UClassType; \
	typedef ISBZHoldOutTriggerVolumeInterface ThisClass; \
	static USBZActorFilterComponent* Execute_GetActorFilterComponent(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZHoldOutTriggerVolumeInterface() {} \
public: \
	typedef USBZHoldOutTriggerVolumeInterface UClassType; \
	typedef ISBZHoldOutTriggerVolumeInterface ThisClass; \
	static USBZActorFilterComponent* Execute_GetActorFilterComponent(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHoldOutTriggerVolumeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutTriggerVolumeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
