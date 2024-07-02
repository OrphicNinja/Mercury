// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef STARBREEZE_SBZAISightBlockerInterface_generated_h
#error "SBZAISightBlockerInterface.generated.h already included, missing '#pragma once' in SBZAISightBlockerInterface.h"
#endif
#define STARBREEZE_SBZAISightBlockerInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_RPC_WRAPPERS \
	virtual bool CanAffectStealth_Implementation() const { return false; }; \
	virtual float GetSightModifier_Implementation(FVector const& Start, FVector const& End) const { return 0; }; \
 \
	DECLARE_FUNCTION(execCanAffectStealth); \
	DECLARE_FUNCTION(execGetSightModifier);


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanAffectStealth_Implementation() const { return false; }; \
	virtual float GetSightModifier_Implementation(FVector const& Start, FVector const& End) const { return 0; }; \
 \
	DECLARE_FUNCTION(execCanAffectStealth); \
	DECLARE_FUNCTION(execGetSightModifier);


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_EVENT_PARMS \
	struct SBZAISightBlockerInterface_eventCanAffectStealth_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZAISightBlockerInterface_eventCanAffectStealth_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SBZAISightBlockerInterface_eventGetSightModifier_Parms \
	{ \
		FVector Start; \
		FVector End; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZAISightBlockerInterface_eventGetSightModifier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAISightBlockerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAISightBlockerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAISightBlockerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAISightBlockerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAISightBlockerInterface(USBZAISightBlockerInterface&&); \
	NO_API USBZAISightBlockerInterface(const USBZAISightBlockerInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAISightBlockerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAISightBlockerInterface(USBZAISightBlockerInterface&&); \
	NO_API USBZAISightBlockerInterface(const USBZAISightBlockerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAISightBlockerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAISightBlockerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAISightBlockerInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZAISightBlockerInterface(); \
	friend struct Z_Construct_UClass_USBZAISightBlockerInterface_Statics; \
public: \
	DECLARE_CLASS(USBZAISightBlockerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAISightBlockerInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZAISightBlockerInterface() {} \
public: \
	typedef USBZAISightBlockerInterface UClassType; \
	typedef ISBZAISightBlockerInterface ThisClass; \
	static bool Execute_CanAffectStealth(const UObject* O); \
	static float Execute_GetSightModifier(const UObject* O, FVector const& Start, FVector const& End); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZAISightBlockerInterface() {} \
public: \
	typedef USBZAISightBlockerInterface UClassType; \
	typedef ISBZAISightBlockerInterface ThisClass; \
	static bool Execute_CanAffectStealth(const UObject* O); \
	static float Execute_GetSightModifier(const UObject* O, FVector const& Start, FVector const& End); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAISightBlockerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAISightBlockerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
