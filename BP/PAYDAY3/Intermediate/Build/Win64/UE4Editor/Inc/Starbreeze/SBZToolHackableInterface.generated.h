// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZHackableInteractableComponent;
struct FVector;
class USBZMiniGameComponent;
class USBZHackingComponent;
#ifdef STARBREEZE_SBZToolHackableInterface_generated_h
#error "SBZToolHackableInterface.generated.h already included, missing '#pragma once' in SBZToolHackableInterface.h"
#endif
#define STARBREEZE_SBZToolHackableInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_RPC_WRAPPERS \
	virtual void AddToWorldRuntime_Implementation() {}; \
	virtual USBZHackableInteractableComponent* GetHackableInteractableComponent_Implementation() { return NULL; }; \
	virtual FVector GetHackableLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual USBZMiniGameComponent* GetHackableMiniGameComponent_Implementation() { return NULL; }; \
	virtual USBZHackingComponent* GetHackingComponent_Implementation() { return NULL; }; \
	virtual void HighlightHackable_Implementation(bool bInHighlight) {}; \
	virtual void RemoveFromWorldRuntime_Implementation() {}; \
 \
	DECLARE_FUNCTION(execAddToWorldRuntime); \
	DECLARE_FUNCTION(execGetHackableInteractableComponent); \
	DECLARE_FUNCTION(execGetHackableLocation); \
	DECLARE_FUNCTION(execGetHackableMiniGameComponent); \
	DECLARE_FUNCTION(execGetHackingComponent); \
	DECLARE_FUNCTION(execHighlightHackable); \
	DECLARE_FUNCTION(execRemoveFromWorldRuntime);


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddToWorldRuntime_Implementation() {}; \
	virtual USBZHackableInteractableComponent* GetHackableInteractableComponent_Implementation() { return NULL; }; \
	virtual FVector GetHackableLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual USBZMiniGameComponent* GetHackableMiniGameComponent_Implementation() { return NULL; }; \
	virtual USBZHackingComponent* GetHackingComponent_Implementation() { return NULL; }; \
	virtual void HighlightHackable_Implementation(bool bInHighlight) {}; \
	virtual void RemoveFromWorldRuntime_Implementation() {}; \
 \
	DECLARE_FUNCTION(execAddToWorldRuntime); \
	DECLARE_FUNCTION(execGetHackableInteractableComponent); \
	DECLARE_FUNCTION(execGetHackableLocation); \
	DECLARE_FUNCTION(execGetHackableMiniGameComponent); \
	DECLARE_FUNCTION(execGetHackingComponent); \
	DECLARE_FUNCTION(execHighlightHackable); \
	DECLARE_FUNCTION(execRemoveFromWorldRuntime);


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_EVENT_PARMS \
	struct SBZToolHackableInterface_eventGetHackableInteractableComponent_Parms \
	{ \
		USBZHackableInteractableComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZToolHackableInterface_eventGetHackableInteractableComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZToolHackableInterface_eventGetHackableLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZToolHackableInterface_eventGetHackableLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct SBZToolHackableInterface_eventGetHackableMiniGameComponent_Parms \
	{ \
		USBZMiniGameComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZToolHackableInterface_eventGetHackableMiniGameComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZToolHackableInterface_eventGetHackingComponent_Parms \
	{ \
		USBZHackingComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZToolHackableInterface_eventGetHackingComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZToolHackableInterface_eventHighlightHackable_Parms \
	{ \
		bool bInHighlight; \
	}; \
	struct SBZToolHackableInterface_eventOnHackingSyncAborted_Parms \
	{ \
		bool bInIsSynchedAlready; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZToolHackableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZToolHackableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZToolHackableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZToolHackableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZToolHackableInterface(USBZToolHackableInterface&&); \
	NO_API USBZToolHackableInterface(const USBZToolHackableInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZToolHackableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZToolHackableInterface(USBZToolHackableInterface&&); \
	NO_API USBZToolHackableInterface(const USBZToolHackableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZToolHackableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZToolHackableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZToolHackableInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZToolHackableInterface(); \
	friend struct Z_Construct_UClass_USBZToolHackableInterface_Statics; \
public: \
	DECLARE_CLASS(USBZToolHackableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZToolHackableInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZToolHackableInterface() {} \
public: \
	typedef USBZToolHackableInterface UClassType; \
	typedef ISBZToolHackableInterface ThisClass; \
	static void Execute_AddToWorldRuntime(UObject* O); \
	static USBZHackableInteractableComponent* Execute_GetHackableInteractableComponent(UObject* O); \
	static FVector Execute_GetHackableLocation(const UObject* O); \
	static USBZMiniGameComponent* Execute_GetHackableMiniGameComponent(UObject* O); \
	static USBZHackingComponent* Execute_GetHackingComponent(UObject* O); \
	static void Execute_HighlightHackable(UObject* O, bool bInHighlight); \
	static void Execute_OnHackingSyncAborted(UObject* O, bool bInIsSynchedAlready); \
	static void Execute_OnHackingSyncCompleted(UObject* O); \
	static void Execute_OnHackingSyncStarted(UObject* O); \
	static void Execute_OnHackingSyncSucceeded(UObject* O); \
	static void Execute_RemoveFromWorldRuntime(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZToolHackableInterface() {} \
public: \
	typedef USBZToolHackableInterface UClassType; \
	typedef ISBZToolHackableInterface ThisClass; \
	static void Execute_AddToWorldRuntime(UObject* O); \
	static USBZHackableInteractableComponent* Execute_GetHackableInteractableComponent(UObject* O); \
	static FVector Execute_GetHackableLocation(const UObject* O); \
	static USBZMiniGameComponent* Execute_GetHackableMiniGameComponent(UObject* O); \
	static USBZHackingComponent* Execute_GetHackingComponent(UObject* O); \
	static void Execute_HighlightHackable(UObject* O, bool bInHighlight); \
	static void Execute_OnHackingSyncAborted(UObject* O, bool bInIsSynchedAlready); \
	static void Execute_OnHackingSyncCompleted(UObject* O); \
	static void Execute_OnHackingSyncStarted(UObject* O); \
	static void Execute_OnHackingSyncSucceeded(UObject* O); \
	static void Execute_RemoveFromWorldRuntime(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZToolHackableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZToolHackableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
