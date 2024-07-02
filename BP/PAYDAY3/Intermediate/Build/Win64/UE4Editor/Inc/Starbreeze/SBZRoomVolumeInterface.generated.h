// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZRoomVolume;
#ifdef STARBREEZE_SBZRoomVolumeInterface_generated_h
#error "SBZRoomVolumeInterface.generated.h already included, missing '#pragma once' in SBZRoomVolumeInterface.h"
#endif
#define STARBREEZE_SBZRoomVolumeInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_RPC_WRAPPERS \
	virtual void EnterRoom_Implementation(ASBZRoomVolume* RoomVolume) {}; \
	virtual ASBZRoomVolume* GetCurrentRoom_Implementation() const { return NULL; }; \
	virtual void LeaveRoom_Implementation(ASBZRoomVolume* RoomVolume) {}; \
 \
	DECLARE_FUNCTION(execEnterRoom); \
	DECLARE_FUNCTION(execGetCurrentRoom); \
	DECLARE_FUNCTION(execLeaveRoom);


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EnterRoom_Implementation(ASBZRoomVolume* RoomVolume) {}; \
	virtual ASBZRoomVolume* GetCurrentRoom_Implementation() const { return NULL; }; \
	virtual void LeaveRoom_Implementation(ASBZRoomVolume* RoomVolume) {}; \
 \
	DECLARE_FUNCTION(execEnterRoom); \
	DECLARE_FUNCTION(execGetCurrentRoom); \
	DECLARE_FUNCTION(execLeaveRoom);


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_EVENT_PARMS \
	struct SBZRoomVolumeInterface_eventEnterRoom_Parms \
	{ \
		ASBZRoomVolume* RoomVolume; \
	}; \
	struct SBZRoomVolumeInterface_eventGetCurrentRoom_Parms \
	{ \
		ASBZRoomVolume* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZRoomVolumeInterface_eventGetCurrentRoom_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZRoomVolumeInterface_eventLeaveRoom_Parms \
	{ \
		ASBZRoomVolume* RoomVolume; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZRoomVolumeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRoomVolumeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRoomVolumeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRoomVolumeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRoomVolumeInterface(USBZRoomVolumeInterface&&); \
	NO_API USBZRoomVolumeInterface(const USBZRoomVolumeInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZRoomVolumeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZRoomVolumeInterface(USBZRoomVolumeInterface&&); \
	NO_API USBZRoomVolumeInterface(const USBZRoomVolumeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZRoomVolumeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZRoomVolumeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZRoomVolumeInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZRoomVolumeInterface(); \
	friend struct Z_Construct_UClass_USBZRoomVolumeInterface_Statics; \
public: \
	DECLARE_CLASS(USBZRoomVolumeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZRoomVolumeInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZRoomVolumeInterface() {} \
public: \
	typedef USBZRoomVolumeInterface UClassType; \
	typedef ISBZRoomVolumeInterface ThisClass; \
	static void Execute_EnterRoom(UObject* O, ASBZRoomVolume* RoomVolume); \
	static ASBZRoomVolume* Execute_GetCurrentRoom(const UObject* O); \
	static void Execute_LeaveRoom(UObject* O, ASBZRoomVolume* RoomVolume); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZRoomVolumeInterface() {} \
public: \
	typedef USBZRoomVolumeInterface UClassType; \
	typedef ISBZRoomVolumeInterface ThisClass; \
	static void Execute_EnterRoom(UObject* O, ASBZRoomVolume* RoomVolume); \
	static ASBZRoomVolume* Execute_GetCurrentRoom(const UObject* O); \
	static void Execute_LeaveRoom(UObject* O, ASBZRoomVolume* RoomVolume); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZRoomVolumeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZRoomVolumeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
