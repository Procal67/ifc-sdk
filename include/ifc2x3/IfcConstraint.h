/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCCONSTRAINT_H
#define IFC2X3_IFCCONSTRAINT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcDateTimeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcConstraint : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * Gets the value of the explicit attribute 'ConstraintGrade'.
         * 
         */
        virtual IfcConstraintEnum getConstraintGrade();
        /**
         * (const) Returns the value of the explicit attribute 'ConstraintGrade'.
         * 
         * @return the value of the explicit attribute 'ConstraintGrade'
         */
        virtual const IfcConstraintEnum getConstraintGrade() const;
        /**
         * Sets the value of the explicit attribute 'ConstraintGrade'.
         * 
         * @param value
         */
        virtual void setConstraintGrade(IfcConstraintEnum value);
        /**
         * Gets the value of the explicit attribute 'ConstraintSource'.
         * 
         */
        virtual IfcLabel getConstraintSource();
        /**
         * (const) Returns the value of the explicit attribute 'ConstraintSource'.
         * 
         * @return the value of the explicit attribute 'ConstraintSource'
         */
        virtual const IfcLabel getConstraintSource() const;
        /**
         * Sets the value of the explicit attribute 'ConstraintSource'.
         * 
         * @param value
         */
        virtual void setConstraintSource(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'CreatingActor'.
         * 
         */
        virtual IfcActorSelect *getCreatingActor();
        /**
         * (const) Returns the value of the explicit attribute 'CreatingActor'.
         * 
         * @return the value of the explicit attribute 'CreatingActor'
         */
        virtual const IfcActorSelect *getCreatingActor() const;
        /**
         * Sets the value of the explicit attribute 'CreatingActor'.
         * 
         * @param value
         */
        virtual void setCreatingActor(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * Gets the value of the explicit attribute 'CreationTime'.
         * 
         */
        virtual IfcDateTimeSelect *getCreationTime();
        /**
         * (const) Returns the value of the explicit attribute 'CreationTime'.
         * 
         * @return the value of the explicit attribute 'CreationTime'
         */
        virtual const IfcDateTimeSelect *getCreationTime() const;
        /**
         * Sets the value of the explicit attribute 'CreationTime'.
         * 
         * @param value
         */
        virtual void setCreationTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedGrade'.
         * 
         */
        virtual IfcLabel getUserDefinedGrade();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedGrade'.
         * 
         * @return the value of the explicit attribute 'UserDefinedGrade'
         */
        virtual const IfcLabel getUserDefinedGrade() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedGrade'.
         * 
         * @param value
         */
        virtual void setUserDefinedGrade(const IfcLabel &value);
        /**
         * Gets the value of the inverse attribute 'ClassifiedAs'.
         * 
         */
        Inverse_Set_IfcConstraintClassificationRelationship_0_n &getClassifiedAs();
        /**
         * (const) Returns the value of the explicit attribute 'ClassifiedAs'.
         * 
         * @return the value of the explicit attribute 'ClassifiedAs'
         */
        virtual const Inverse_Set_IfcConstraintClassificationRelationship_0_n &getClassifiedAs() const;
        /**
         * Gets the value of the inverse attribute 'RelatesConstraints'.
         * 
         */
        Inverse_Set_IfcConstraintRelationship_0_n &getRelatesConstraints();
        /**
         * (const) Returns the value of the explicit attribute 'RelatesConstraints'.
         * 
         * @return the value of the explicit attribute 'RelatesConstraints'
         */
        virtual const Inverse_Set_IfcConstraintRelationship_0_n &getRelatesConstraints() const;
        /**
         * Gets the value of the inverse attribute 'IsRelatedWith'.
         * 
         */
        Inverse_Set_IfcConstraintRelationship_0_n &getIsRelatedWith();
        /**
         * (const) Returns the value of the explicit attribute 'IsRelatedWith'.
         * 
         * @return the value of the explicit attribute 'IsRelatedWith'
         */
        virtual const Inverse_Set_IfcConstraintRelationship_0_n &getIsRelatedWith() const;
        /**
         * Gets the value of the inverse attribute 'PropertiesForConstraint'.
         * 
         */
        Inverse_Set_IfcPropertyConstraintRelationship_0_n &getPropertiesForConstraint();
        /**
         * (const) Returns the value of the explicit attribute 'PropertiesForConstraint'.
         * 
         * @return the value of the explicit attribute 'PropertiesForConstraint'
         */
        virtual const Inverse_Set_IfcPropertyConstraintRelationship_0_n &getPropertiesForConstraint() const;
        /**
         * Gets the value of the inverse attribute 'Aggregates'.
         * 
         */
        Inverse_Set_IfcConstraintAggregationRelationship_0_n &getAggregates();
        /**
         * (const) Returns the value of the explicit attribute 'Aggregates'.
         * 
         * @return the value of the explicit attribute 'Aggregates'
         */
        virtual const Inverse_Set_IfcConstraintAggregationRelationship_0_n &getAggregates() const;
        /**
         * Gets the value of the inverse attribute 'IsAggregatedIn'.
         * 
         */
        Inverse_Set_IfcConstraintAggregationRelationship_0_n &getIsAggregatedIn();
        /**
         * (const) Returns the value of the explicit attribute 'IsAggregatedIn'.
         * 
         * @return the value of the explicit attribute 'IsAggregatedIn'
         */
        virtual const Inverse_Set_IfcConstraintAggregationRelationship_0_n &getIsAggregatedIn() const;
        friend class IfcConstraintAggregationRelationship;
        friend class IfcConstraintClassificationRelationship;
        friend class ExpressDataSet;
        friend class Inverted_IfcConstraintRelationship_RelatedConstraints_type;
        friend class Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type;
        friend class IfcPropertyConstraintRelationship;
        friend class IfcConstraintRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstraint(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstraint();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstraint &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        IfcConstraintEnum m_constraintGrade;
        /**
         */
        Step::String m_constraintSource;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_creatingActor;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_creationTime;
        /**
         */
        Step::String m_userDefinedGrade;
        /**
         */
        Inverse_Set_IfcConstraintClassificationRelationship_0_n m_classifiedAs;
        /**
         */
        Inverse_Set_IfcConstraintRelationship_0_n m_relatesConstraints;
        /**
         */
        Inverse_Set_IfcConstraintRelationship_0_n m_isRelatedWith;
        /**
         */
        Inverse_Set_IfcPropertyConstraintRelationship_0_n m_propertiesForConstraint;
        /**
         */
        Inverse_Set_IfcConstraintAggregationRelationship_0_n m_aggregates;
        /**
         */
        Inverse_Set_IfcConstraintAggregationRelationship_0_n m_isAggregatedIn;

    };

}

#endif // IFC2X3_IFCCONSTRAINT_H
