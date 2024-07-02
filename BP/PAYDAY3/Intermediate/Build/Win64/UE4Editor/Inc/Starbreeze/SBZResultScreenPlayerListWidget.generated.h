// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class ASBZPlayerState;
class ASBZAICrewState;
#ifdef STARBREEZE_SBZResultScreenPlayerListWidget_generated_h
#error "SBZResultScreenPlayerListWidget.generated.h already included, missing '#pragma once' in SBZResultScreenPlayerListWidget.h"
#endif
#define STARBREEZE_SBZResultScreenPlayerListWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_EVENT_PARMS \
	struct SBZResultScreenPlayerListWidget_eventOnMergePartyUpdated_Parms \
	{ \
		FString PlayerDisplayName; \
		bool bIsMergePartySelected; \
	}; \
	struct SBZResultScreenPlayerListWidget_eventOnSanitizeDisplayNamesComplete_Parms \
	{ \
		TMap<int32,FString> PlayerIdToAccelByteDisplayNameMap; \
	}; \
	struct SBZResultScreenPlayerListWidget_eventOnSetup_Parms \
	{ \
		TArray<ASBZPlayerState*> PlayerStateArray; \
		TArray<ASBZAICrewState*> AICrewStateArray; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZResultScreenPlayerListWidget(); \
	friend struct Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics; \
public: \
	DECLARE_CLASS(USBZResultScreenPlayerListWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZResultScreenPlayerListWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZResultScreenPlayerListWidget(); \
	friend struct Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics; \
public: \
	DECLARE_CLASS(USBZResultScreenPlayerListWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZResultScreenPlayerListWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZResultScreenPlayerListWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZResultScreenPlayerListWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZResultScreenPlayerListWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZResultScreenPlayerListWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZResultScreenPlayerListWidget(USBZResultScreenPlayerListWidget&&); \
	NO_API USBZResultScreenPlayerListWidget(const USBZResultScreenPlayerListWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZResultScreenPlayerListWidget(USBZResultScreenPlayerListWidget&&); \
	NO_API USBZResultScreenPlayerListWidget(const USBZResultScreenPlayerListWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZResultScreenPlayerListWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZResultScreenPlayerListWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZResultScreenPlayerListWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZResultScreenPlayerListWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZResultScreenPlayerListWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
