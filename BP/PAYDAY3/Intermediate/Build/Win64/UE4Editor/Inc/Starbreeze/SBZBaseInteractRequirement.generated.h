// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZInteractorComponent;
struct FSBZInteractReqData;
#ifdef STARBREEZE_SBZBaseInteractRequirement_generated_h
#error "SBZBaseInteractRequirement.generated.h already included, missing '#pragma once' in SBZBaseInteractRequirement.h"
#endif
#define STARBREEZE_SBZBaseInteractRequirement_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_RPC_WRAPPERS \
	virtual bool BP_CheckRequirement_Implementation(const USBZInteractorComponent* Interactor, FSBZInteractReqData& OutData, bool bIsSignalRequired, bool bInIsScreenInteract, bool bIsCasing) const; \
 \
	DECLARE_FUNCTION(execBP_CheckRequirement);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool BP_CheckRequirement_Implementation(const USBZInteractorComponent* Interactor, FSBZInteractReqData& OutData, bool bIsSignalRequired, bool bInIsScreenInteract, bool bIsCasing) const; \
 \
	DECLARE_FUNCTION(execBP_CheckRequirement);


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_EVENT_PARMS \
	struct SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms \
	{ \
		const USBZInteractorComponent* Interactor; \
		FSBZInteractReqData OutData; \
		bool bIsSignalRequired; \
		bool bInIsScreenInteract; \
		bool bIsCasing; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZBaseInteractRequirement_eventBP_CheckRequirement_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBaseInteractRequirement(); \
	friend struct Z_Construct_UClass_USBZBaseInteractRequirement_Statics; \
public: \
	DECLARE_CLASS(USBZBaseInteractRequirement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBaseInteractRequirement)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBaseInteractRequirement(); \
	friend struct Z_Construct_UClass_USBZBaseInteractRequirement_Statics; \
public: \
	DECLARE_CLASS(USBZBaseInteractRequirement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBaseInteractRequirement)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBaseInteractRequirement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBaseInteractRequirement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBaseInteractRequirement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBaseInteractRequirement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBaseInteractRequirement(USBZBaseInteractRequirement&&); \
	NO_API USBZBaseInteractRequirement(const USBZBaseInteractRequirement&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBaseInteractRequirement(USBZBaseInteractRequirement&&); \
	NO_API USBZBaseInteractRequirement(const USBZBaseInteractRequirement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBaseInteractRequirement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBaseInteractRequirement); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USBZBaseInteractRequirement)


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBaseInteractRequirement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBaseInteractRequirement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
