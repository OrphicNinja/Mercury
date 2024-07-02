// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZCuttableComponent;
class USBZCuttableSplineComponent;
class UStaticMeshComponent;
class UNiagaraComponent;
enum class ESBZCuttableState : uint8;
#ifdef STARBREEZE_SBZCuttableInterface_generated_h
#error "SBZCuttableInterface.generated.h already included, missing '#pragma once' in SBZCuttableInterface.h"
#endif
#define STARBREEZE_SBZCuttableInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_RPC_WRAPPERS \
	virtual USBZCuttableComponent* GetCuttableComponent_Implementation() { return NULL; }; \
	virtual USBZCuttableSplineComponent* GetCuttableSplineComponent_Implementation() { return NULL; }; \
	virtual UStaticMeshComponent* GetMeltingMesh_Implementation() { return NULL; }; \
	virtual UNiagaraComponent* GetNiagaraComponent_Implementation() { return NULL; }; \
	virtual bool IsWindow_Implementation() { return false; }; \
	virtual void OnCuttableStateChanged_Implementation(ESBZCuttableState NewCuttableState) {}; \
 \
	DECLARE_FUNCTION(execGetCuttableComponent); \
	DECLARE_FUNCTION(execGetCuttableSplineComponent); \
	DECLARE_FUNCTION(execGetMeltingMesh); \
	DECLARE_FUNCTION(execGetNiagaraComponent); \
	DECLARE_FUNCTION(execIsWindow); \
	DECLARE_FUNCTION(execOnCuttableStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USBZCuttableComponent* GetCuttableComponent_Implementation() { return NULL; }; \
	virtual USBZCuttableSplineComponent* GetCuttableSplineComponent_Implementation() { return NULL; }; \
	virtual UStaticMeshComponent* GetMeltingMesh_Implementation() { return NULL; }; \
	virtual UNiagaraComponent* GetNiagaraComponent_Implementation() { return NULL; }; \
	virtual bool IsWindow_Implementation() { return false; }; \
	virtual void OnCuttableStateChanged_Implementation(ESBZCuttableState NewCuttableState) {}; \
 \
	DECLARE_FUNCTION(execGetCuttableComponent); \
	DECLARE_FUNCTION(execGetCuttableSplineComponent); \
	DECLARE_FUNCTION(execGetMeltingMesh); \
	DECLARE_FUNCTION(execGetNiagaraComponent); \
	DECLARE_FUNCTION(execIsWindow); \
	DECLARE_FUNCTION(execOnCuttableStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_EVENT_PARMS \
	struct SBZCuttableInterface_eventGetCuttableComponent_Parms \
	{ \
		USBZCuttableComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZCuttableInterface_eventGetCuttableComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZCuttableInterface_eventGetCuttableSplineComponent_Parms \
	{ \
		USBZCuttableSplineComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZCuttableInterface_eventGetCuttableSplineComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZCuttableInterface_eventGetMeltingMesh_Parms \
	{ \
		UStaticMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZCuttableInterface_eventGetMeltingMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZCuttableInterface_eventGetNiagaraComponent_Parms \
	{ \
		UNiagaraComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZCuttableInterface_eventGetNiagaraComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZCuttableInterface_eventIsWindow_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZCuttableInterface_eventIsWindow_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SBZCuttableInterface_eventOnCuttableStateChanged_Parms \
	{ \
		ESBZCuttableState NewCuttableState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCuttableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCuttableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttableInterface(USBZCuttableInterface&&); \
	NO_API USBZCuttableInterface(const USBZCuttableInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCuttableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttableInterface(USBZCuttableInterface&&); \
	NO_API USBZCuttableInterface(const USBZCuttableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCuttableInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZCuttableInterface(); \
	friend struct Z_Construct_UClass_USBZCuttableInterface_Statics; \
public: \
	DECLARE_CLASS(USBZCuttableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCuttableInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZCuttableInterface() {} \
public: \
	typedef USBZCuttableInterface UClassType; \
	typedef ISBZCuttableInterface ThisClass; \
	static USBZCuttableComponent* Execute_GetCuttableComponent(UObject* O); \
	static USBZCuttableSplineComponent* Execute_GetCuttableSplineComponent(UObject* O); \
	static UStaticMeshComponent* Execute_GetMeltingMesh(UObject* O); \
	static UNiagaraComponent* Execute_GetNiagaraComponent(UObject* O); \
	static bool Execute_IsWindow(UObject* O); \
	static void Execute_OnCuttableStateChanged(UObject* O, ESBZCuttableState NewCuttableState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZCuttableInterface() {} \
public: \
	typedef USBZCuttableInterface UClassType; \
	typedef ISBZCuttableInterface ThisClass; \
	static USBZCuttableComponent* Execute_GetCuttableComponent(UObject* O); \
	static USBZCuttableSplineComponent* Execute_GetCuttableSplineComponent(UObject* O); \
	static UStaticMeshComponent* Execute_GetMeltingMesh(UObject* O); \
	static UNiagaraComponent* Execute_GetNiagaraComponent(UObject* O); \
	static bool Execute_IsWindow(UObject* O); \
	static void Execute_OnCuttableStateChanged(UObject* O, ESBZCuttableState NewCuttableState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCuttableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCuttableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
