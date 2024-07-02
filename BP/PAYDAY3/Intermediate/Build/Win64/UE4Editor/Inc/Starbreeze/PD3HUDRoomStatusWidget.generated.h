// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZRoomType : uint8;
class ASBZRoomVolume;
#ifdef STARBREEZE_PD3HUDRoomStatusWidget_generated_h
#error "PD3HUDRoomStatusWidget.generated.h already included, missing '#pragma once' in PD3HUDRoomStatusWidget.h"
#endif
#define STARBREEZE_PD3HUDRoomStatusWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleHeistGoneLoud); \
	DECLARE_FUNCTION(execRoomTypeChanged); \
	DECLARE_FUNCTION(execRoomVolumeChanged);


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleHeistGoneLoud); \
	DECLARE_FUNCTION(execRoomTypeChanged); \
	DECLARE_FUNCTION(execRoomVolumeChanged);


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_EVENT_PARMS \
	struct PD3HUDRoomStatusWidget_eventOnRoomChanged_Parms \
	{ \
		ASBZRoomVolume* RoomVolume; \
	}; \
	struct PD3HUDRoomStatusWidget_eventOnRoomTypeChanged_Parms \
	{ \
		ESBZRoomType InRoomType; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3HUDRoomStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDRoomStatusWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDRoomStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPD3HUDRoomStatusWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDRoomStatusWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDRoomStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3HUDRoomStatusWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3HUDRoomStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDRoomStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDRoomStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDRoomStatusWidget(UPD3HUDRoomStatusWidget&&); \
	NO_API UPD3HUDRoomStatusWidget(const UPD3HUDRoomStatusWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDRoomStatusWidget(UPD3HUDRoomStatusWidget&&); \
	NO_API UPD3HUDRoomStatusWidget(const UPD3HUDRoomStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDRoomStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDRoomStatusWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3HUDRoomStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RoomType() { return STRUCT_OFFSET(UPD3HUDRoomStatusWidget, RoomType); } \
	FORCEINLINE static uint32 __PPO__InFeedbackClass() { return STRUCT_OFFSET(UPD3HUDRoomStatusWidget, InFeedbackClass); } \
	FORCEINLINE static uint32 __PPO__bHasGoneLoud() { return STRUCT_OFFSET(UPD3HUDRoomStatusWidget, bHasGoneLoud); }


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3HUDRoomStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HUDRoomStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
