// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZCarryType;
#ifdef STARBREEZE_PD3HUDPlayerCarryWidget_generated_h
#error "PD3HUDPlayerCarryWidget.generated.h already included, missing '#pragma once' in PD3HUDPlayerCarryWidget.h"
#endif
#define STARBREEZE_PD3HUDPlayerCarryWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_EVENT_PARMS \
	struct PD3HUDPlayerCarryWidget_eventOnCarryTypeDropped_Parms \
	{ \
		const USBZCarryType* DroppedCarryType; \
	}; \
	struct PD3HUDPlayerCarryWidget_eventOnCarryTypePickedUp_Parms \
	{ \
		const USBZCarryType* PickedUpCarryType; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3HUDPlayerCarryWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDPlayerCarryWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDPlayerCarryWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPD3HUDPlayerCarryWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDPlayerCarryWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDPlayerCarryWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDPlayerCarryWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3HUDPlayerCarryWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3HUDPlayerCarryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDPlayerCarryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDPlayerCarryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDPlayerCarryWidget(UPD3HUDPlayerCarryWidget&&); \
	NO_API UPD3HUDPlayerCarryWidget(const UPD3HUDPlayerCarryWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDPlayerCarryWidget(UPD3HUDPlayerCarryWidget&&); \
	NO_API UPD3HUDPlayerCarryWidget(const UPD3HUDPlayerCarryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDPlayerCarryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDPlayerCarryWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3HUDPlayerCarryWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultControlsReference() { return STRUCT_OFFSET(UPD3HUDPlayerCarryWidget, DefaultControlsReference); } \
	FORCEINLINE static uint32 __PPO__CurrentCarryTypeArray() { return STRUCT_OFFSET(UPD3HUDPlayerCarryWidget, CurrentCarryTypeArray); } \
	FORCEINLINE static uint32 __PPO__CurrentControlsReferenceID() { return STRUCT_OFFSET(UPD3HUDPlayerCarryWidget, CurrentControlsReferenceID); }


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3HUDPlayerCarryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCarryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
