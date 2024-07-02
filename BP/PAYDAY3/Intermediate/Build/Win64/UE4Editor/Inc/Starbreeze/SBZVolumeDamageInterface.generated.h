// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayEffect;
 
struct FGameplayTagContainer;
class USBZVolumeDamageEffect;
class AActor;
class UObject;
class USBZDamageType;
#ifdef STARBREEZE_SBZVolumeDamageInterface_generated_h
#error "SBZVolumeDamageInterface.generated.h already included, missing '#pragma once' in SBZVolumeDamageInterface.h"
#endif
#define STARBREEZE_SBZVolumeDamageInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_RPC_WRAPPERS \
	virtual TSubclassOf<UGameplayEffect>  GetTacticianDiscombobulateVolumeDamageEffectClass_Implementation() const { return NULL; }; \
	virtual TMap<FName,float> GetTacticianDiscombobulateVolumeDamageEffectValueMap_Implementation() const { return TMap<FName,float>(); }; \
	virtual FGameplayTagContainer GetVolumeDamageAddedTagContainer_Implementation() const { return FGameplayTagContainer(); }; \
	virtual float GetVolumeDamageArmorPenetration_Implementation() const { return 0; }; \
	virtual TSubclassOf<USBZVolumeDamageEffect>  GetVolumeDamageEffectClass_Implementation() const { return NULL; }; \
	virtual AActor* GetVolumeDamageOwner_Implementation(UObject* ThisObject) const { return NULL; }; \
	virtual float GetVolumeDamagePerSecond_Implementation() const { return 0; }; \
	virtual float GetVolumeDamageTickSeconds_Implementation() const { return 0; }; \
	virtual TSubclassOf<USBZDamageType>  GetVolumeDamageType_Implementation() const { return NULL; }; \
	virtual float GetVolumeOverHealDamageMultiplier_Implementation() const { return 0; }; \
	virtual bool IsVolumeDamageReady_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execGetTacticianDiscombobulateVolumeDamageEffectClass); \
	DECLARE_FUNCTION(execGetTacticianDiscombobulateVolumeDamageEffectValueMap); \
	DECLARE_FUNCTION(execGetVolumeDamageAddedTagContainer); \
	DECLARE_FUNCTION(execGetVolumeDamageArmorPenetration); \
	DECLARE_FUNCTION(execGetVolumeDamageEffectClass); \
	DECLARE_FUNCTION(execGetVolumeDamageOwner); \
	DECLARE_FUNCTION(execGetVolumeDamagePerSecond); \
	DECLARE_FUNCTION(execGetVolumeDamageTickSeconds); \
	DECLARE_FUNCTION(execGetVolumeDamageType); \
	DECLARE_FUNCTION(execGetVolumeOverHealDamageMultiplier); \
	DECLARE_FUNCTION(execIsVolumeDamageReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSubclassOf<UGameplayEffect>  GetTacticianDiscombobulateVolumeDamageEffectClass_Implementation() const { return NULL; }; \
	virtual TMap<FName,float> GetTacticianDiscombobulateVolumeDamageEffectValueMap_Implementation() const { return TMap<FName,float>(); }; \
	virtual FGameplayTagContainer GetVolumeDamageAddedTagContainer_Implementation() const { return FGameplayTagContainer(); }; \
	virtual float GetVolumeDamageArmorPenetration_Implementation() const { return 0; }; \
	virtual TSubclassOf<USBZVolumeDamageEffect>  GetVolumeDamageEffectClass_Implementation() const { return NULL; }; \
	virtual AActor* GetVolumeDamageOwner_Implementation(UObject* ThisObject) const { return NULL; }; \
	virtual float GetVolumeDamagePerSecond_Implementation() const { return 0; }; \
	virtual float GetVolumeDamageTickSeconds_Implementation() const { return 0; }; \
	virtual TSubclassOf<USBZDamageType>  GetVolumeDamageType_Implementation() const { return NULL; }; \
	virtual float GetVolumeOverHealDamageMultiplier_Implementation() const { return 0; }; \
	virtual bool IsVolumeDamageReady_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execGetTacticianDiscombobulateVolumeDamageEffectClass); \
	DECLARE_FUNCTION(execGetTacticianDiscombobulateVolumeDamageEffectValueMap); \
	DECLARE_FUNCTION(execGetVolumeDamageAddedTagContainer); \
	DECLARE_FUNCTION(execGetVolumeDamageArmorPenetration); \
	DECLARE_FUNCTION(execGetVolumeDamageEffectClass); \
	DECLARE_FUNCTION(execGetVolumeDamageOwner); \
	DECLARE_FUNCTION(execGetVolumeDamagePerSecond); \
	DECLARE_FUNCTION(execGetVolumeDamageTickSeconds); \
	DECLARE_FUNCTION(execGetVolumeDamageType); \
	DECLARE_FUNCTION(execGetVolumeOverHealDamageMultiplier); \
	DECLARE_FUNCTION(execIsVolumeDamageReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_EVENT_PARMS \
	struct SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectClass_Parms \
	{ \
		TSubclassOf<UGameplayEffect>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectValueMap_Parms \
	{ \
		TMap<FName,float> ReturnValue; \
	}; \
	struct SBZVolumeDamageInterface_eventGetVolumeDamageAddedTagContainer_Parms \
	{ \
		FGameplayTagContainer ReturnValue; \
	}; \
	struct SBZVolumeDamageInterface_eventGetVolumeDamageArmorPenetration_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZVolumeDamageInterface_eventGetVolumeDamageArmorPenetration_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SBZVolumeDamageInterface_eventGetVolumeDamageEffectClass_Parms \
	{ \
		TSubclassOf<USBZVolumeDamageEffect>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZVolumeDamageInterface_eventGetVolumeDamageEffectClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZVolumeDamageInterface_eventGetVolumeDamageOwner_Parms \
	{ \
		UObject* ThisObject; \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZVolumeDamageInterface_eventGetVolumeDamageOwner_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZVolumeDamageInterface_eventGetVolumeDamagePerSecond_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZVolumeDamageInterface_eventGetVolumeDamagePerSecond_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SBZVolumeDamageInterface_eventGetVolumeDamageTickSeconds_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZVolumeDamageInterface_eventGetVolumeDamageTickSeconds_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SBZVolumeDamageInterface_eventGetVolumeDamageType_Parms \
	{ \
		TSubclassOf<USBZDamageType>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZVolumeDamageInterface_eventGetVolumeDamageType_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct SBZVolumeDamageInterface_eventGetVolumeOverHealDamageMultiplier_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZVolumeDamageInterface_eventGetVolumeOverHealDamageMultiplier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct SBZVolumeDamageInterface_eventIsVolumeDamageReady_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZVolumeDamageInterface_eventIsVolumeDamageReady_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVolumeDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVolumeDamageInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVolumeDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVolumeDamageInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVolumeDamageInterface(USBZVolumeDamageInterface&&); \
	NO_API USBZVolumeDamageInterface(const USBZVolumeDamageInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVolumeDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVolumeDamageInterface(USBZVolumeDamageInterface&&); \
	NO_API USBZVolumeDamageInterface(const USBZVolumeDamageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVolumeDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVolumeDamageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVolumeDamageInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZVolumeDamageInterface(); \
	friend struct Z_Construct_UClass_USBZVolumeDamageInterface_Statics; \
public: \
	DECLARE_CLASS(USBZVolumeDamageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVolumeDamageInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZVolumeDamageInterface() {} \
public: \
	typedef USBZVolumeDamageInterface UClassType; \
	typedef ISBZVolumeDamageInterface ThisClass; \
	static TSubclassOf<UGameplayEffect>  Execute_GetTacticianDiscombobulateVolumeDamageEffectClass(const UObject* O); \
	static TMap<FName,float> Execute_GetTacticianDiscombobulateVolumeDamageEffectValueMap(const UObject* O); \
	static FGameplayTagContainer Execute_GetVolumeDamageAddedTagContainer(const UObject* O); \
	static float Execute_GetVolumeDamageArmorPenetration(const UObject* O); \
	static TSubclassOf<USBZVolumeDamageEffect>  Execute_GetVolumeDamageEffectClass(const UObject* O); \
	static AActor* Execute_GetVolumeDamageOwner(const UObject* O, UObject* ThisObject); \
	static float Execute_GetVolumeDamagePerSecond(const UObject* O); \
	static float Execute_GetVolumeDamageTickSeconds(const UObject* O); \
	static TSubclassOf<USBZDamageType>  Execute_GetVolumeDamageType(const UObject* O); \
	static float Execute_GetVolumeOverHealDamageMultiplier(const UObject* O); \
	static bool Execute_IsVolumeDamageReady(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZVolumeDamageInterface() {} \
public: \
	typedef USBZVolumeDamageInterface UClassType; \
	typedef ISBZVolumeDamageInterface ThisClass; \
	static TSubclassOf<UGameplayEffect>  Execute_GetTacticianDiscombobulateVolumeDamageEffectClass(const UObject* O); \
	static TMap<FName,float> Execute_GetTacticianDiscombobulateVolumeDamageEffectValueMap(const UObject* O); \
	static FGameplayTagContainer Execute_GetVolumeDamageAddedTagContainer(const UObject* O); \
	static float Execute_GetVolumeDamageArmorPenetration(const UObject* O); \
	static TSubclassOf<USBZVolumeDamageEffect>  Execute_GetVolumeDamageEffectClass(const UObject* O); \
	static AActor* Execute_GetVolumeDamageOwner(const UObject* O, UObject* ThisObject); \
	static float Execute_GetVolumeDamagePerSecond(const UObject* O); \
	static float Execute_GetVolumeDamageTickSeconds(const UObject* O); \
	static TSubclassOf<USBZDamageType>  Execute_GetVolumeDamageType(const UObject* O); \
	static float Execute_GetVolumeOverHealDamageMultiplier(const UObject* O); \
	static bool Execute_IsVolumeDamageReady(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVolumeDamageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVolumeDamageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
