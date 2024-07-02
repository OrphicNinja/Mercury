// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZTraversalTrajectoryInterface_generated_h
#error "SBZTraversalTrajectoryInterface.generated.h already included, missing '#pragma once' in SBZTraversalTrajectoryInterface.h"
#endif
#define STARBREEZE_SBZTraversalTrajectoryInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTraversalTrajectoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTraversalTrajectoryInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTraversalTrajectoryInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTraversalTrajectoryInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTraversalTrajectoryInterface(USBZTraversalTrajectoryInterface&&); \
	NO_API USBZTraversalTrajectoryInterface(const USBZTraversalTrajectoryInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTraversalTrajectoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTraversalTrajectoryInterface(USBZTraversalTrajectoryInterface&&); \
	NO_API USBZTraversalTrajectoryInterface(const USBZTraversalTrajectoryInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTraversalTrajectoryInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTraversalTrajectoryInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTraversalTrajectoryInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZTraversalTrajectoryInterface(); \
	friend struct Z_Construct_UClass_USBZTraversalTrajectoryInterface_Statics; \
public: \
	DECLARE_CLASS(USBZTraversalTrajectoryInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTraversalTrajectoryInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZTraversalTrajectoryInterface() {} \
public: \
	typedef USBZTraversalTrajectoryInterface UClassType; \
	typedef ISBZTraversalTrajectoryInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZTraversalTrajectoryInterface() {} \
public: \
	typedef USBZTraversalTrajectoryInterface UClassType; \
	typedef ISBZTraversalTrajectoryInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_6_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZTraversalTrajectoryInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTraversalTrajectoryInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
