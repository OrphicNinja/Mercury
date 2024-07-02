// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidgetComponent;
#ifdef STARBREEZE_SBZCodeViewerInterface_generated_h
#error "SBZCodeViewerInterface.generated.h already included, missing '#pragma once' in SBZCodeViewerInterface.h"
#endif
#define STARBREEZE_SBZCodeViewerInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_RPC_WRAPPERS \
	virtual int32 GetNumberOfCodeWidgets_Implementation() const { return 0; }; \
	virtual void InitializeWidget_Implementation(UWidgetComponent* Widget) {}; \
	virtual void UpdateCodeViewer_Implementation(TArray<int32> const& GeneratedCodes, const int32 TrueCodeIndex) {}; \
	virtual void UpdateIdentifier_Implementation(FText const& InIdentifier) {}; \
 \
	DECLARE_FUNCTION(execGetNumberOfCodeWidgets); \
	DECLARE_FUNCTION(execInitializeWidget); \
	DECLARE_FUNCTION(execUpdateCodeViewer); \
	DECLARE_FUNCTION(execUpdateIdentifier);


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetNumberOfCodeWidgets_Implementation() const { return 0; }; \
	virtual void InitializeWidget_Implementation(UWidgetComponent* Widget) {}; \
	virtual void UpdateCodeViewer_Implementation(TArray<int32> const& GeneratedCodes, const int32 TrueCodeIndex) {}; \
	virtual void UpdateIdentifier_Implementation(FText const& InIdentifier) {}; \
 \
	DECLARE_FUNCTION(execGetNumberOfCodeWidgets); \
	DECLARE_FUNCTION(execInitializeWidget); \
	DECLARE_FUNCTION(execUpdateCodeViewer); \
	DECLARE_FUNCTION(execUpdateIdentifier);


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_EVENT_PARMS \
	struct SBZCodeViewerInterface_eventBP_SetCode_Parms \
	{ \
		UWidgetComponent* Widget; \
		int32 CodeToShow; \
	}; \
	struct SBZCodeViewerInterface_eventGetNumberOfCodeWidgets_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZCodeViewerInterface_eventGetNumberOfCodeWidgets_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SBZCodeViewerInterface_eventInitializeWidget_Parms \
	{ \
		UWidgetComponent* Widget; \
	}; \
	struct SBZCodeViewerInterface_eventUpdateCodeViewer_Parms \
	{ \
		TArray<int32> GeneratedCodes; \
		int32 TrueCodeIndex; \
	}; \
	struct SBZCodeViewerInterface_eventUpdateIdentifier_Parms \
	{ \
		FText InIdentifier; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCodeViewerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCodeViewerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCodeViewerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCodeViewerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCodeViewerInterface(USBZCodeViewerInterface&&); \
	NO_API USBZCodeViewerInterface(const USBZCodeViewerInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCodeViewerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCodeViewerInterface(USBZCodeViewerInterface&&); \
	NO_API USBZCodeViewerInterface(const USBZCodeViewerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCodeViewerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCodeViewerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCodeViewerInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZCodeViewerInterface(); \
	friend struct Z_Construct_UClass_USBZCodeViewerInterface_Statics; \
public: \
	DECLARE_CLASS(USBZCodeViewerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCodeViewerInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZCodeViewerInterface() {} \
public: \
	typedef USBZCodeViewerInterface UClassType; \
	typedef ISBZCodeViewerInterface ThisClass; \
	static void Execute_BP_SetCode(UObject* O, UWidgetComponent* Widget, int32 CodeToShow); \
	static int32 Execute_GetNumberOfCodeWidgets(const UObject* O); \
	static void Execute_InitializeWidget(UObject* O, UWidgetComponent* Widget); \
	static void Execute_UpdateCodeViewer(UObject* O, TArray<int32> const& GeneratedCodes, const int32 TrueCodeIndex); \
	static void Execute_UpdateIdentifier(UObject* O, FText const& InIdentifier); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZCodeViewerInterface() {} \
public: \
	typedef USBZCodeViewerInterface UClassType; \
	typedef ISBZCodeViewerInterface ThisClass; \
	static void Execute_BP_SetCode(UObject* O, UWidgetComponent* Widget, int32 CodeToShow); \
	static int32 Execute_GetNumberOfCodeWidgets(const UObject* O); \
	static void Execute_InitializeWidget(UObject* O, UWidgetComponent* Widget); \
	static void Execute_UpdateCodeViewer(UObject* O, TArray<int32> const& GeneratedCodes, const int32 TrueCodeIndex); \
	static void Execute_UpdateIdentifier(UObject* O, FText const& InIdentifier); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCodeViewerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCodeViewerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
