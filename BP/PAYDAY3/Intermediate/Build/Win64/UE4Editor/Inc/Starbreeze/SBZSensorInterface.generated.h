// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZSensorComponent;
class USBZOutlineComponent;
#ifdef STARBREEZE_SBZSensorInterface_generated_h
#error "SBZSensorInterface.generated.h already included, missing '#pragma once' in SBZSensorInterface.h"
#endif
#define STARBREEZE_SBZSensorInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_RPC_WRAPPERS \
	virtual USBZSensorComponent* GetSensorComponent_Implementation() { return NULL; }; \
	virtual USBZOutlineComponent* GetSensorOutlineComponent_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetSensorComponent); \
	DECLARE_FUNCTION(execGetSensorOutlineComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USBZSensorComponent* GetSensorComponent_Implementation() { return NULL; }; \
	virtual USBZOutlineComponent* GetSensorOutlineComponent_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetSensorComponent); \
	DECLARE_FUNCTION(execGetSensorOutlineComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_EVENT_PARMS \
	struct SBZSensorInterface_eventGetSensorComponent_Parms \
	{ \
		USBZSensorComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZSensorInterface_eventGetSensorComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZSensorInterface_eventGetSensorOutlineComponent_Parms \
	{ \
		USBZOutlineComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZSensorInterface_eventGetSensorOutlineComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSensorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSensorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSensorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSensorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSensorInterface(USBZSensorInterface&&); \
	NO_API USBZSensorInterface(const USBZSensorInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSensorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSensorInterface(USBZSensorInterface&&); \
	NO_API USBZSensorInterface(const USBZSensorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSensorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSensorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSensorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZSensorInterface(); \
	friend struct Z_Construct_UClass_USBZSensorInterface_Statics; \
public: \
	DECLARE_CLASS(USBZSensorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSensorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZSensorInterface() {} \
public: \
	typedef USBZSensorInterface UClassType; \
	typedef ISBZSensorInterface ThisClass; \
	static USBZSensorComponent* Execute_GetSensorComponent(UObject* O); \
	static USBZOutlineComponent* Execute_GetSensorOutlineComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZSensorInterface() {} \
public: \
	typedef USBZSensorInterface UClassType; \
	typedef ISBZSensorInterface ThisClass; \
	static USBZSensorComponent* Execute_GetSensorComponent(UObject* O); \
	static USBZOutlineComponent* Execute_GetSensorOutlineComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSensorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSensorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
