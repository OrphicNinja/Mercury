// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCuttableSplineComponent_generated_h
#error "SBZCuttableSplineComponent.generated.h already included, missing '#pragma once' in SBZCuttableSplineComponent.h"
#endif
#define STARBREEZE_SBZCuttableSplineComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupSplineComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupSplineComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCuttableSplineComponent(); \
	friend struct Z_Construct_UClass_USBZCuttableSplineComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCuttableSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCuttableSplineComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCuttableSplineComponent(); \
	friend struct Z_Construct_UClass_USBZCuttableSplineComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCuttableSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCuttableSplineComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCuttableSplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCuttableSplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttableSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttableSplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttableSplineComponent(USBZCuttableSplineComponent&&); \
	NO_API USBZCuttableSplineComponent(const USBZCuttableSplineComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttableSplineComponent(USBZCuttableSplineComponent&&); \
	NO_API USBZCuttableSplineComponent(const USBZCuttableSplineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttableSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttableSplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCuttableSplineComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Segments() { return STRUCT_OFFSET(USBZCuttableSplineComponent, Segments); } \
	FORCEINLINE static uint32 __PPO__Radius() { return STRUCT_OFFSET(USBZCuttableSplineComponent, Radius); } \
	FORCEINLINE static uint32 __PPO__LineLength() { return STRUCT_OFFSET(USBZCuttableSplineComponent, LineLength); } \
	FORCEINLINE static uint32 __PPO__RadiusPadding() { return STRUCT_OFFSET(USBZCuttableSplineComponent, RadiusPadding); } \
	FORCEINLINE static uint32 __PPO__CuttableSplineType() { return STRUCT_OFFSET(USBZCuttableSplineComponent, CuttableSplineType); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCuttableSplineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCuttableSplineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
