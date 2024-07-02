// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZTutorialPopUpActor_generated_h
#error "SBZTutorialPopUpActor.generated.h already included, missing '#pragma once' in SBZTutorialPopUpActor.h"
#endif
#define STARBREEZE_SBZTutorialPopUpActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_RPC_WRAPPERS \
	virtual void Client_ShowControlsReference_Implementation(const int32 Index); \
	virtual void Client_ShowSideBarNotification_Implementation(const int32 Index); \
	virtual void Client_ShowTutorialPopUp_Implementation(const int32 Index); \
	virtual void Server_CloseTutorialPopUp_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_ShowControlsReference); \
	DECLARE_FUNCTION(execClient_ShowSideBarNotification); \
	DECLARE_FUNCTION(execClient_ShowTutorialPopUp); \
	DECLARE_FUNCTION(execCloseTutorialPopUp); \
	DECLARE_FUNCTION(execOnActionPhaseEntered); \
	DECLARE_FUNCTION(execServer_CloseTutorialPopUp); \
	DECLARE_FUNCTION(execShowControlsReference); \
	DECLARE_FUNCTION(execShowSideBarNotification); \
	DECLARE_FUNCTION(execShowTutorialPopUp);


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_ShowControlsReference_Implementation(const int32 Index); \
	virtual void Client_ShowSideBarNotification_Implementation(const int32 Index); \
	virtual void Client_ShowTutorialPopUp_Implementation(const int32 Index); \
	virtual void Server_CloseTutorialPopUp_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_ShowControlsReference); \
	DECLARE_FUNCTION(execClient_ShowSideBarNotification); \
	DECLARE_FUNCTION(execClient_ShowTutorialPopUp); \
	DECLARE_FUNCTION(execCloseTutorialPopUp); \
	DECLARE_FUNCTION(execOnActionPhaseEntered); \
	DECLARE_FUNCTION(execServer_CloseTutorialPopUp); \
	DECLARE_FUNCTION(execShowControlsReference); \
	DECLARE_FUNCTION(execShowSideBarNotification); \
	DECLARE_FUNCTION(execShowTutorialPopUp);


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_EVENT_PARMS \
	struct SBZTutorialPopUpActor_eventClient_ShowControlsReference_Parms \
	{ \
		int32 Index; \
	}; \
	struct SBZTutorialPopUpActor_eventClient_ShowSideBarNotification_Parms \
	{ \
		int32 Index; \
	}; \
	struct SBZTutorialPopUpActor_eventClient_ShowTutorialPopUp_Parms \
	{ \
		int32 Index; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZTutorialPopUpActor(); \
	friend struct Z_Construct_UClass_ASBZTutorialPopUpActor_Statics; \
public: \
	DECLARE_CLASS(ASBZTutorialPopUpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTutorialPopUpActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASBZTutorialPopUpActor(); \
	friend struct Z_Construct_UClass_ASBZTutorialPopUpActor_Statics; \
public: \
	DECLARE_CLASS(ASBZTutorialPopUpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTutorialPopUpActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZTutorialPopUpActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTutorialPopUpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTutorialPopUpActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTutorialPopUpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTutorialPopUpActor(ASBZTutorialPopUpActor&&); \
	NO_API ASBZTutorialPopUpActor(const ASBZTutorialPopUpActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTutorialPopUpActor(ASBZTutorialPopUpActor&&); \
	NO_API ASBZTutorialPopUpActor(const ASBZTutorialPopUpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTutorialPopUpActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTutorialPopUpActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTutorialPopUpActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TutorialPopUpArray() { return STRUCT_OFFSET(ASBZTutorialPopUpActor, TutorialPopUpArray); } \
	FORCEINLINE static uint32 __PPO__SideBarNotificationArray() { return STRUCT_OFFSET(ASBZTutorialPopUpActor, SideBarNotificationArray); } \
	FORCEINLINE static uint32 __PPO__ControlsReferenceArray() { return STRUCT_OFFSET(ASBZTutorialPopUpActor, ControlsReferenceArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZTutorialPopUpActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTutorialPopUpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
