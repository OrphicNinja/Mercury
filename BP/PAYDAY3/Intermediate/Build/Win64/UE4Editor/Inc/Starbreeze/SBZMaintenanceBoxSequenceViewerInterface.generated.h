// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMaintenanceBoxSequenceViewerInterface_generated_h
#error "SBZMaintenanceBoxSequenceViewerInterface.generated.h already included, missing '#pragma once' in SBZMaintenanceBoxSequenceViewerInterface.h"
#endif
#define STARBREEZE_SBZMaintenanceBoxSequenceViewerInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_RPC_WRAPPERS \
	virtual void UpdateSequenceHint_Implementation(const int32 SequenceIndex, TArray<int32> const& CorrectSequence) {}; \
 \
	DECLARE_FUNCTION(execUpdateSequenceHint);


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateSequenceHint_Implementation(const int32 SequenceIndex, TArray<int32> const& CorrectSequence) {}; \
 \
	DECLARE_FUNCTION(execUpdateSequenceHint);


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_EVENT_PARMS \
	struct SBZMaintenanceBoxSequenceViewerInterface_eventUpdateSequenceHint_Parms \
	{ \
		int32 SequenceIndex; \
		TArray<int32> CorrectSequence; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMaintenanceBoxSequenceViewerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMaintenanceBoxSequenceViewerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMaintenanceBoxSequenceViewerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMaintenanceBoxSequenceViewerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMaintenanceBoxSequenceViewerInterface(USBZMaintenanceBoxSequenceViewerInterface&&); \
	NO_API USBZMaintenanceBoxSequenceViewerInterface(const USBZMaintenanceBoxSequenceViewerInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMaintenanceBoxSequenceViewerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMaintenanceBoxSequenceViewerInterface(USBZMaintenanceBoxSequenceViewerInterface&&); \
	NO_API USBZMaintenanceBoxSequenceViewerInterface(const USBZMaintenanceBoxSequenceViewerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMaintenanceBoxSequenceViewerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMaintenanceBoxSequenceViewerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMaintenanceBoxSequenceViewerInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZMaintenanceBoxSequenceViewerInterface(); \
	friend struct Z_Construct_UClass_USBZMaintenanceBoxSequenceViewerInterface_Statics; \
public: \
	DECLARE_CLASS(USBZMaintenanceBoxSequenceViewerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMaintenanceBoxSequenceViewerInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZMaintenanceBoxSequenceViewerInterface() {} \
public: \
	typedef USBZMaintenanceBoxSequenceViewerInterface UClassType; \
	typedef ISBZMaintenanceBoxSequenceViewerInterface ThisClass; \
	static void Execute_UpdateSequenceHint(UObject* O, const int32 SequenceIndex, TArray<int32> const& CorrectSequence); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZMaintenanceBoxSequenceViewerInterface() {} \
public: \
	typedef USBZMaintenanceBoxSequenceViewerInterface UClassType; \
	typedef ISBZMaintenanceBoxSequenceViewerInterface ThisClass; \
	static void Execute_UpdateSequenceHint(UObject* O, const int32 SequenceIndex, TArray<int32> const& CorrectSequence); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMaintenanceBoxSequenceViewerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxSequenceViewerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
