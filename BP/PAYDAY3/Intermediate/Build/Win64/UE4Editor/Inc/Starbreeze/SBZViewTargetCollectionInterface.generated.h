// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_SBZViewTargetCollectionInterface_generated_h
#error "SBZViewTargetCollectionInterface.generated.h already included, missing '#pragma once' in SBZViewTargetCollectionInterface.h"
#endif
#define STARBREEZE_SBZViewTargetCollectionInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_RPC_WRAPPERS \
	virtual AActor* GetCurrentViewTarget_Implementation() const { return NULL; }; \
	virtual AActor* GetViewTarget_Implementation(int32 InViewTargetIndex) const { return NULL; }; \
	virtual int32 GetViewTargetCount_Implementation() const { return 0; }; \
	virtual int32 GetViewTargetIndex_Implementation(AActor* ViewTarget) const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetCurrentViewTarget); \
	DECLARE_FUNCTION(execGetViewTarget); \
	DECLARE_FUNCTION(execGetViewTargetCount); \
	DECLARE_FUNCTION(execGetViewTargetIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AActor* GetCurrentViewTarget_Implementation() const { return NULL; }; \
	virtual AActor* GetViewTarget_Implementation(int32 InViewTargetIndex) const { return NULL; }; \
	virtual int32 GetViewTargetCount_Implementation() const { return 0; }; \
	virtual int32 GetViewTargetIndex_Implementation(AActor* ViewTarget) const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetCurrentViewTarget); \
	DECLARE_FUNCTION(execGetViewTarget); \
	DECLARE_FUNCTION(execGetViewTargetCount); \
	DECLARE_FUNCTION(execGetViewTargetIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_EVENT_PARMS \
	struct SBZViewTargetCollectionInterface_eventGetCurrentViewTarget_Parms \
	{ \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZViewTargetCollectionInterface_eventGetCurrentViewTarget_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZViewTargetCollectionInterface_eventGetViewTarget_Parms \
	{ \
		int32 InViewTargetIndex; \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZViewTargetCollectionInterface_eventGetViewTarget_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZViewTargetCollectionInterface_eventGetViewTargetCount_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZViewTargetCollectionInterface_eventGetViewTargetCount_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SBZViewTargetCollectionInterface_eventGetViewTargetIndex_Parms \
	{ \
		AActor* ViewTarget; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZViewTargetCollectionInterface_eventGetViewTargetIndex_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZViewTargetCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZViewTargetCollectionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZViewTargetCollectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZViewTargetCollectionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZViewTargetCollectionInterface(USBZViewTargetCollectionInterface&&); \
	NO_API USBZViewTargetCollectionInterface(const USBZViewTargetCollectionInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZViewTargetCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZViewTargetCollectionInterface(USBZViewTargetCollectionInterface&&); \
	NO_API USBZViewTargetCollectionInterface(const USBZViewTargetCollectionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZViewTargetCollectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZViewTargetCollectionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZViewTargetCollectionInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZViewTargetCollectionInterface(); \
	friend struct Z_Construct_UClass_USBZViewTargetCollectionInterface_Statics; \
public: \
	DECLARE_CLASS(USBZViewTargetCollectionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZViewTargetCollectionInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZViewTargetCollectionInterface() {} \
public: \
	typedef USBZViewTargetCollectionInterface UClassType; \
	typedef ISBZViewTargetCollectionInterface ThisClass; \
	static AActor* Execute_GetCurrentViewTarget(const UObject* O); \
	static AActor* Execute_GetViewTarget(const UObject* O, int32 InViewTargetIndex); \
	static int32 Execute_GetViewTargetCount(const UObject* O); \
	static int32 Execute_GetViewTargetIndex(const UObject* O, AActor* ViewTarget); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZViewTargetCollectionInterface() {} \
public: \
	typedef USBZViewTargetCollectionInterface UClassType; \
	typedef ISBZViewTargetCollectionInterface ThisClass; \
	static AActor* Execute_GetCurrentViewTarget(const UObject* O); \
	static AActor* Execute_GetViewTarget(const UObject* O, int32 InViewTargetIndex); \
	static int32 Execute_GetViewTargetCount(const UObject* O); \
	static int32 Execute_GetViewTargetIndex(const UObject* O, AActor* ViewTarget); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZViewTargetCollectionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZViewTargetCollectionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
