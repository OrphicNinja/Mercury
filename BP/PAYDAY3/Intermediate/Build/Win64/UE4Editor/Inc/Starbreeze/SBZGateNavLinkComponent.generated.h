// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZGateNavLinkComponent_generated_h
#error "SBZGateNavLinkComponent.generated.h already included, missing '#pragma once' in SBZGateNavLinkComponent.h"
#endif
#define STARBREEZE_SBZGateNavLinkComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGateNavLinkComponent(); \
	friend struct Z_Construct_UClass_USBZGateNavLinkComponent_Statics; \
public: \
	DECLARE_CLASS(USBZGateNavLinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGateNavLinkComponent) \
	DECLARE_WITHIN(ASBZGate) \
	virtual UObject* _getUObject() const override { return const_cast<USBZGateNavLinkComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGateNavLinkComponent(); \
	friend struct Z_Construct_UClass_USBZGateNavLinkComponent_Statics; \
public: \
	DECLARE_CLASS(USBZGateNavLinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGateNavLinkComponent) \
	DECLARE_WITHIN(ASBZGate) \
	virtual UObject* _getUObject() const override { return const_cast<USBZGateNavLinkComponent*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGateNavLinkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGateNavLinkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGateNavLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGateNavLinkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGateNavLinkComponent(USBZGateNavLinkComponent&&); \
	NO_API USBZGateNavLinkComponent(const USBZGateNavLinkComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGateNavLinkComponent(USBZGateNavLinkComponent&&); \
	NO_API USBZGateNavLinkComponent(const USBZGateNavLinkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGateNavLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGateNavLinkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGateNavLinkComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavigationLink() { return STRUCT_OFFSET(USBZGateNavLinkComponent, NavigationLink); } \
	FORCEINLINE static uint32 __PPO__AgilityComponent() { return STRUCT_OFFSET(USBZGateNavLinkComponent, AgilityComponent); } \
	FORCEINLINE static uint32 __PPO__AllowedBlockingCharacter() { return STRUCT_OFFSET(USBZGateNavLinkComponent, AllowedBlockingCharacter); } \
	FORCEINLINE static uint32 __PPO__AllowedBlockingController() { return STRUCT_OFFSET(USBZGateNavLinkComponent, AllowedBlockingController); } \
	FORCEINLINE static uint32 __PPO__OriginalAreaClass() { return STRUCT_OFFSET(USBZGateNavLinkComponent, OriginalAreaClass); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGateNavLinkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGateNavLinkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
